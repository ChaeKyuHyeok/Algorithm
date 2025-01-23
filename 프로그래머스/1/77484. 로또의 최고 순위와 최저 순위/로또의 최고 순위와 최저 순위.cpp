#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int ranking(int num) {
    if(7 - num == 7) return 6;
    else return 7 - num;
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int count = 0;
    int zero_count = 0;
    
    sort(lottos.begin(), lottos.end());
    
    for(int i=0; i<6; i++) {
        if(lottos[i] == 0) zero_count++;
    }
    
    for(int i=zero_count; i<6; i++) {
        for(int j=0; j<6; j++) {
            if(lottos[i] == win_nums[j]) count++;
        }
    }
    
    answer.push_back(ranking(count+zero_count));
    answer.push_back(ranking(count));
    return answer;
}