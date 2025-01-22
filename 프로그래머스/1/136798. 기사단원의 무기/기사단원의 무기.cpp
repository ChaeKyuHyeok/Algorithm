#include <string>
#include <vector>

using namespace std;

bool isDivisor(int num) {
    
}

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for(int i=1; i<=number; i++) {
        int poweri = 1;
        
        for(int j=1; j<=i/2; j++) {
            if(i%j == 0)
                poweri++;
        }
        if(poweri > limit) poweri = power;
        answer+=poweri;
    }
    return answer;
}