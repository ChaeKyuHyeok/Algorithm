#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string s)
{
    vector<int> answer;
    map<char, int> m;
    
    for(int i = 0; i<s.size(); i++)
    {
        if(m.find(s[i]) == m.end())
        {
            m[s[i]] = i;
            answer.push_back(-1);
        }
        else
        {
            int index = m[s[i]];
            answer.push_back(i - index);
            m[s[i]] = i;
        }
    }
    return answer;
}