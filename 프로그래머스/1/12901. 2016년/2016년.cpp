#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int month[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string dayOfWeek[] = {"THU","FRI","SAT","SUN","MON","TUE","WED"};
    
    int sum=b;
    for(int i=0; i<a-1; i++)
        sum+=month[i];
    
    answer = dayOfWeek[sum%7];
    return answer;
}