#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<vector<int>> supoja = {{1,2,3,4,5}, {2,1,2,3,2,4,2,5}, {3,3,1,1,2,2,4,4,5,5}};
    vector<int> correct_count = {0,0,0};
    int max;
    
    for(int i=0; i<answers.size(); i++)
    {
        if(answers[i] == supoja[0][i % supoja[0].size()]) correct_count[0]++;
        if(answers[i] == supoja[1][i % supoja[1].size()]) correct_count[1]++;
        if(answers[i] == supoja[2][i % supoja[2].size()]) correct_count[2]++;
    }
    
    max = *max_element(correct_count.begin(), correct_count.end());
    for(int i = 0; i< correct_count.size(); i++)
    {
        if(correct_count[i] == max) answer.push_back(i+1);
    }
    return answer;
}