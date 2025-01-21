#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int target = 0;
    
    for(int i=0; i<section.size(); i++) {
        if(target > section[i]) continue;
        else {
            target = section[i] + m;
            answer++;
        }
    }
    return answer;
}