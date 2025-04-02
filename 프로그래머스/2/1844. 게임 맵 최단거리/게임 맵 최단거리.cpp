#include<vector>
#include<queue>

using namespace std;

int solution(vector<vector<int>> maps)
{
    queue<pair<int, int>> q;
    int n = maps.size();
    int m = maps[0].size();
    const int dx[4] = {-1, 1, 0, 0};
    const int dy[4] = {0, 0, -1, 1};
    vector<vector<int>> visited(n, vector<int>(m, -1));

    q.push({0, 0});
    visited[0][0] = 1;

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(x == n-1 && y == m-1)
        {
            return visited[x][y];
        }

        for(int i=0; i<4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && nx <n && ny >=0 && ny <m)
            {
                if(visited[nx][ny] == -1 && maps[nx][ny] == 1)
                {
                    visited[nx][ny] = visited[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }

    return -1;
}