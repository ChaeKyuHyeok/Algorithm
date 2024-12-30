#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int s_length = s.length();

    if (s_length % 2 == 0)
    {
        answer = s[s_length / 2 - 1];
    }
    answer += s[s_length / 2];
    return answer;
}