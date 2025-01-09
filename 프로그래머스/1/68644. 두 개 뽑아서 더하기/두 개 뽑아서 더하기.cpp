#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> temp;
    sort(numbers.begin(), numbers.end());
    
    for(int i=0; i<numbers.size()-1; i++) {
        for(int j=i+1; j<numbers.size(); j++) {
            temp.insert(numbers[i] + numbers[j]);
        }
    }
    answer = vector<int>(temp.begin(), temp.end());
    return answer;
}