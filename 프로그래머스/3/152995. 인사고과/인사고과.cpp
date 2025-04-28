#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> scores) {
    int wanhoAttitude = scores[0][0];
    int wanhoPeer = scores[0][1];
    int wanhoScore = wanhoAttitude + wanhoPeer;
    
    // 1. 정렬: 태도 점수 기준 내림차순, 태도 점수 같으면 동료평가 점수 오름차순
    sort(scores.begin(), scores.end(), [](vector<int>& a, vector<int>& b) {
        if (a[0] == b[0]) return a[1] < b[1];
        return a[0] > b[0];
    });

    // 2. 탈락자 걸러내기
    int maxPeer = -1;
    vector<pair<int, int>> valid;
    for (auto& score : scores)
    {
        if (score[1] < maxPeer)
            continue; // 둘 다 낮은 경우 탈락
        
        maxPeer = max(maxPeer, score[1]);
        valid.push_back({score[0], score[1]});
    }

    // 3. 완호가 탈락했는지 검사
    bool wanhoFound = false;
    for (auto& p : valid)
    {
        if (p.first == wanhoAttitude && p.second == wanhoPeer)
        {
            wanhoFound = true;
            break;
        }
    }
    if (!wanhoFound)
        return -1;

    // 4. 남은 사람 기준으로 합 점수로 석차 매기기
    vector<int> sums;
    for (auto& p : valid)
    {
        sums.push_back(p.first + p.second);
    }

    sort(sums.begin(), sums.end(), greater<int>());

    int rank = 1;
    int prev = sums[0];
    int same = 1;

    for (int i = 0; i < sums.size(); i++)
    {
        if (i > 0)
        {
            if (sums[i] < prev)
            {
                rank += same;
                same = 1;
                prev = sums[i];
            }
            else
            {
                same++;
            }
        }

        if (sums[i] == wanhoScore)
        {
            return rank;
        }
    }

    return -1;
}
