#include <string>
#include <climits>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    int min = INT_MAX, max = INT_MIN;
    
    stringstream ss(s);
    int num;
    
    while(ss >> num)
    {
        if(num < min) min = num;
        if(num > max) max = num;
    }
    
    answer += to_string(min);
    answer += ' ';
    answer += to_string(max);
    return answer;
}