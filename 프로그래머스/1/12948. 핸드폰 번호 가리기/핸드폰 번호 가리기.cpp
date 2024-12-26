#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = phone_number;
    int pn_length = phone_number.length();
    
    for(int i=0; i<pn_length; i++)
    {
        if(pn_length - i > 4) answer[i] = '*';
    }
    return answer;
}