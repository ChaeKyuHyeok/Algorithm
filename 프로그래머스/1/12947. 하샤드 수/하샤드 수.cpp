#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum_digits = 0;
    int temp = x;
    
    while(temp)
    {
        sum_digits += temp%10;
        cout << sum_digits << endl;
        temp /= 10;
    }
    if(x%sum_digits==0)
    {
        answer = true;
    }
    else
    {
        answer = false;
    }
    return answer;
}