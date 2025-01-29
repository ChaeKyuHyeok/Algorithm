#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int x_ary[10] = {0};
    int y_ary[10] = {0};
    int temp;
    
    for(int i=0; i<X.size(); i++) {
        temp = X[i] - '0';
        x_ary[temp]++;
    }
    for(int i=0; i<Y.size(); i++) {
        temp = Y[i] - '0';
        y_ary[temp]++;
    }
    for(int i=9; i>=0; i--) {
        int n = (x_ary[i] < y_ary[i]) ? x_ary[i] : y_ary[i];
        for(int j=0; j<n; j++)
            answer+=to_string(i);
    }
    
    if(answer == "") answer = "-1";
    else if(answer[0] == '0') answer = "0";
    return answer;
}