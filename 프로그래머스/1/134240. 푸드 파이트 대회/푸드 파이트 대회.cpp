#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food)
{
    string answer = "";
    
    for(int i=1; i<food.size(); i++)
    {
        for(int j=0; j<food[i]/2; j++)
        {
            answer += to_string(i);
        }
    }
    string reverse_answer = answer;
    reverse(reverse_answer.begin(), reverse_answer.end());
    answer += "0";
    answer += reverse_answer;
    return answer;
}