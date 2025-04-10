#include <string>
#include <vector>

using namespace std;

bool CheckCanMove(vector<string>& park, int y, int x)
{
    if (y < 0 || y >= park.size()) return false;
    if (x < 0 || x >= park[0].size()) return false;
    if (park[y][x] == 'X') return false;
    return true;
}

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int x, y;

    for (int i = 0; i < park.size(); i++)
    {
        for (int j = 0; j < park[0].size(); j++)
        {
            if (park[i][j] == 'S')
            {
                y = i;
                x = j;
            }
        }
    }

    for (auto& route : routes)
    {
        char dir = route[0];
        int dist = route[2] - '0';

        int tempY = y;
        int tempX = x;
        bool canMove = true;

        for (int i = 1; i <= dist; i++)
        {
            if (dir == 'N') tempY--;
            else if (dir == 'S') tempY++;
            else if (dir == 'E') tempX++;
            else if (dir == 'W') tempX--;

            if (!CheckCanMove(park, tempY, tempX))
            {
                canMove = false;
                break;
            }
        }

        if (canMove)
        {
            y = tempY;
            x = tempX;
        }
    }

    answer.push_back(y);
    answer.push_back(x);
    return answer;
}