#include <string>
#include <vector>
#include <map>

using namespace std;

int total_day(int& y, int& m, int& d)
{
    return y * 12 * 28 + (m - 1) * 28 + d;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    map<char, int> term_map;
    int t_y = stoi(today.substr(0, 4));
    int t_m = stoi(today.substr(5, 2));
    int t_d = stoi(today.substr(8, 2));
    int t_day = total_day(t_y, t_m, t_d);
    
    for(int i=0; i<terms.size(); i++)
    {
        term_map[terms[i][0]] = stoi(terms[i].substr(2));
    }
    
    for(int i=0; i<privacies.size(); i++)
    {
        int y = stoi(privacies[i].substr(0, 4));
        int m = stoi(privacies[i].substr(5, 2));
        int d = stoi(privacies[i].substr(8, 2));
        int p_day = total_day(y, m , d);
        int term = privacies[i].back();
        
        if(t_day >= term_map[term] * 28 + p_day)
            answer.push_back(i+1);
    }
    return answer;
}