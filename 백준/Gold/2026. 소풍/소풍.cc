#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int K, N, F;
vector<vector<bool>> friends;
vector<int> result;
bool found = false;

bool isAllFriends(int student)
{
    for (int selected : result)
    {
        if (!friends[student][selected])
            return false;
    }
    return true;
}

// 백트래킹으로 K명의 친구 그룹 찾기
void findFriendGroup(int idx, int start)
{
    if (idx == K)
    {
        found = true;
        return;
    }

    for (int i = start; i <= N; i++)
    {
        if (found) return;

        if (isAllFriends(i))
        {
            result.push_back(i);
            findFriendGroup(idx + 1, i + 1);
            if (found) return;
            result.pop_back();
        }
    }
}

int main() {
    cin >> K >> N >> F;

    friends.resize(N + 1, vector<bool>(N + 1, false));

    for (int i = 0; i < F; i++)
    {
        int a, b;
        cin >> a >> b;
        friends[a][b] = true;
        friends[b][a] = true;
    }
    for (int i = 1; i <= N; i++)
    {
        friends[i][i] = true;
    }

    findFriendGroup(0, 1);

    if (found)
    {
        for (int student : result)
            cout << student << endl;
    }
    else
        cout << -1 << endl;

    return 0;
}