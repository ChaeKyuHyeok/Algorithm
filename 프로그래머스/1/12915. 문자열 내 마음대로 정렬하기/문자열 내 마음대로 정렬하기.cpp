#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int num;
bool comp(string a, string b) {
    return a[num] == b[num] ? a < b : a[num] < b[num];
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    num = n;
    sort(strings.begin(), strings.end(), comp);
    answer = strings;
    return answer;
}