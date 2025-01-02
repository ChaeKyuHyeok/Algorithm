#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> reverse_three;
    
    while(!n==0)
    {
        reverse_three.push_back(n % 3);
        n /= 3;
    }
    
    for(int i=0; i<reverse_three.size(); i++)
    {
        answer += reverse_three[reverse_three.size() - i-1] * pow(3, i);
    }
    
    return answer;
}