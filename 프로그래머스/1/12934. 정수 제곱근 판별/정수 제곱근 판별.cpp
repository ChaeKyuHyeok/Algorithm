#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    float n_sqrt = sqrt(n);
    
    if(n_sqrt - static_cast<long long>(n_sqrt) == 0)
    {
        answer = pow(static_cast<long long>(n_sqrt+1), 2);
    }
    else
    {
        answer = -1;
    }
    return answer;
}