#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int greater_com_div = 0;
    
    for(int i=1; i<=n*m; i++)
    {
        if(n % i == 0 && m % i ==0)
        {
            greater_com_div = i;
        }
        
        if(i % n == 0 && i % m ==0)
        {
            answer.push_back(greater_com_div);
            answer.push_back(i);
            break;
        }
    }
    return answer;
}