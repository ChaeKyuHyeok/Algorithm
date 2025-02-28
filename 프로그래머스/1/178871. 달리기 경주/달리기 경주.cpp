#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    unordered_map<string, int> player_R;
    unordered_map<int, string> rank_P;
    
    for(int i=0; i<players.size(); i++)
    {
        player_R[players[i]] = i;
        rank_P[i] = players[i];
    }
    
    for (string called : callings)
    {
        int current_R = player_R[called];
        string front_P = rank_P[current_R - 1];
        
        player_R[called] = current_R-1;
        player_R[front_P] = current_R;
        rank_P[current_R - 1] = called;
        rank_P[current_R] = front_P;
    }
    for(int i=0;i<players.size(); i++)
    {
        answer.push_back(rank_P[i]);
    }
    return answer;
}