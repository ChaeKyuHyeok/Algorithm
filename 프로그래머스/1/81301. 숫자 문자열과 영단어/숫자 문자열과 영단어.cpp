#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    int answer = 0;
    string a_temp = "", temp = "";
    vector<string> vec = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for(int i=0; i<s.size(); i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            a_temp += s[i];
        }
        else {
            temp += s[i];
        }
        if(find(vec.begin(), vec.end(), temp) != vec.end()) {
            a_temp += to_string(find(vec.begin(), vec.end(), temp) - vec.begin());
            temp = "";
        }
    }
    answer = stoi(a_temp);
    return answer;
}