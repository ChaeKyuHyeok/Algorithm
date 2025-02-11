#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map<char, int> counter;
    
    for(int i=0; i<survey.size(); i++)
    {
        switch(choices[i])
        {
            case 1:
                counter[survey[i][0]] += 3;
                break;
            case 2:
                counter[survey[i][0]] += 2;
                break;
            case 3:
                counter[survey[i][0]]++;
                break;
            case 4:
                break;
            case 5:
                counter[survey[i][1]] ++;
                break;
            case 6:
                counter[survey[i][1]] += 2;
                break;
            case 7:
                counter[survey[i][1]] += 3;
                break;
        }
    }
    
    // for(int i=0; i<4; i++)
    // {
    //     if(counter['R'] > counter['T'])
    // }
    string first = counter['R'] >= counter['T'] ? "R" : "T";
    string second = counter['C'] >= counter['F'] ? "C" : "F";
    string third = counter['J'] >= counter['M'] ? "J" : "M";
    string fourth = counter['A'] >= counter['N'] ? "A" : "N";
    answer = first + second + third + fourth;
    return answer;
}