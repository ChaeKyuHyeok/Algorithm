#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int card1Counter = 0;
    int card2Counter = 0;
    
    for(int i=0; i<goal.size(); i++)
    {
        if(goal[i] == cards1[card1Counter])
        {
            card1Counter++;
        }
        else if(goal[i] == cards2[card2Counter])
        {
            card2Counter++;
        }
        else
        {
            return "No";
        }
    }
    return "Yes";
}