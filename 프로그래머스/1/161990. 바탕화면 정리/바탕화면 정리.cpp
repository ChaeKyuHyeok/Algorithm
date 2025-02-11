#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int size_x = wallpaper.size(), size_y = wallpaper[0].size();
    int lux = size_x, rdx = 0;
    int luy = size_y, rdy = 0;
    
    for(int i=0; i<size_x; i++)
    {
        for(int j=0; j<size_y; j++)
        {
            if(wallpaper[i][j] == '#')
            {
                if(i < lux) lux = i;
                if(i > rdx) rdx = i;
                if(j < luy) luy = j;
                if(j > rdy) rdy = j;
            }
        }
    }
    
    answer.push_back(lux);
    answer.push_back(luy);
    answer.push_back(rdx+1);
    answer.push_back(rdy+1);
    return answer;
}