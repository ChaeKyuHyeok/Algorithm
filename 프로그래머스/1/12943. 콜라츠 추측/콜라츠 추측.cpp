#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    if(num == 1) return 0;
    int answer = 0;
    long long n_temp = num;
    
    while(true)
    {
        if(n_temp == 1) return answer;
        if(answer == 500) return -1;
        
        n_temp%2 == 0 ? n_temp /=2 : n_temp = n_temp * 3 + 1;
        answer++;
    }
    return answer;
}