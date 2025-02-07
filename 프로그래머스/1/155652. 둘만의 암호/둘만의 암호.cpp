#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for(int i=0; i<s.size(); i++)
    {
        char temp = s[i];
        for(int j=0; j<index;)
        {
            bool isSkip = false;
            temp++;
            if(temp > 'z')
                temp = 'a';
            for(int k=0; k<skip.size(); k++)
            {
                if(temp == skip[k])
                    isSkip = true;
            }
            if(!isSkip) j++;
        }
        answer += temp;
    }
    return answer;
}