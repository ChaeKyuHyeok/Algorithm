#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    long long ptoll = stoll(p);
    long long ttoll;
    
    for(int i=0; i<=t.length() - p.length(); i++)
    {
        ttoll = stoll(t.substr(i, p.length()));
        if(ttoll <= ptoll)
            answer++;
    }
    return answer;
}