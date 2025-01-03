#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int wallet_w =0, wallet_h =0;

    for(int i=0; i<sizes.size(); i++)
    {
        int max = 0, min = 0;
        
        max = (sizes[i][0] > sizes[i][1] ? sizes[i][0] : sizes[i][1]);
        min = (sizes[i][0] < sizes[i][1] ? sizes[i][0] : sizes[i][1]);
        
        if(max > wallet_w) wallet_w = max;
        if(min > wallet_h) wallet_h = min;
    }
    answer = wallet_w*wallet_h;
    return answer;
}