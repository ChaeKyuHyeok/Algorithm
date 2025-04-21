#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    unordered_map<string, unordered_set<string>> user_reports;
    unordered_map<string, int> report_count;
    
    for(const auto& r : report)
    {
        stringstream ss(r);
        string reporter, reported;
        ss >> reporter >> reported;
        
        if(user_reports[reporter].find(reported) == user_reports[reporter].end())
        {
            user_reports[reporter].insert(reported);
            report_count[reported]++;
        }
    }
    
    vector<int> answer(id_list.size(), 0);
    
    for(int i=0; i<id_list.size(); i++)
    {
        string user_id = id_list[i];
        
        for(const auto& reported : user_reports[user_id])
        {
            if(report_count[reported] >= k) answer[i]++;
        }
    }
    
    return answer;
}