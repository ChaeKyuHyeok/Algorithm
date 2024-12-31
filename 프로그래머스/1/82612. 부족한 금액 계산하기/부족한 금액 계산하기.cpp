using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = (long long)money;
    
    for(int i=1; i<=count; i++)
    {
        answer -= (price * i);
    }
    
    if(answer < 0) answer *= -1;
    else if(answer > 0) answer = 0;
    return answer;
}