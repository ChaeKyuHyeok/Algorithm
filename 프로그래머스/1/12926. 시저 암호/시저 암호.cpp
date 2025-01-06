#include <string>
#include <vector>

using namespace std;

string solution(string s, int n)
{
    string answer = "";
    
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == ' ') continue;
        else
        {
            int temp = 0;
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                temp = s[i] + n;
                if(temp > 'z') temp -= 26;
            }
            else if(s[i] >= 'A' && s[i] <= 'Z')
            {
                temp = s[i] + n;
                if(temp > 'Z') temp -= 26;
            }
            s[i] = temp;
        }
    }
    answer = s;
    return answer;
}