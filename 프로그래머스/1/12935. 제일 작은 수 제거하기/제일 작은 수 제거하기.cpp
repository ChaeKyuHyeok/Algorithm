#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min_index = 0;

    if (arr.size()==1)
    {
        answer.push_back(-1);
        return answer;
    }

    for (int i = 0; i < arr.size()-1; i++)
    {
        if (arr[i] < arr[i + 1] && arr[i] < arr[min_index])
            min_index = i;
        else if (arr[i] > arr[i + 1] && arr[i+1] < arr[min_index])
            min_index = i + 1;
    }
    arr.erase(arr.begin() + min_index);
    answer = arr;
    return answer;
}