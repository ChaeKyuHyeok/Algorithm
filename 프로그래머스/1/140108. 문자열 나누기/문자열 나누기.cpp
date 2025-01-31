#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int keyCount = 0;
    int otherCount = 0;
    char key = NULL;
    bool isKey = false;
    
    for(int i=0; i<s.size(); i++) {
        if(!isKey) {
            key = s[i];
            keyCount=1;
            isKey = true;
        }
        else if(isKey) {
            if(s[i]==key) keyCount++;
            else otherCount++;
        }
        if(keyCount==otherCount || i+1 == s.size()) {
            answer++;
            isKey=false;
            otherCount=0;
        }
    }
    return answer;
}