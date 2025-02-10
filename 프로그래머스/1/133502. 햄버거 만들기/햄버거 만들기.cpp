#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    vector<int> temp;
    int answer = 0;
    
    for(int i : ingredient)
    {
        temp.push_back(i);
        
        if(temp.size() >=4 && temp[temp.size()-4] == 1 && temp[temp.size()-3] == 2 && temp[temp.size() - 2] == 3 && temp[temp.size() - 1] == 1)
        {
            answer++;
            temp.erase(temp.end()-4, temp.end());
        }
    }
    return answer;
}