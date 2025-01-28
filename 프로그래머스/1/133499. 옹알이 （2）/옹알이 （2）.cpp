#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    vector<string> list = { "aya", "ye", "woo", "ma" };
    int answer = 0;

    for (string s : babbling) {
        int index = 0;
        int duplicate = -1;
        bool pronounceable = true;
        while (index < s.size()) {
            if (s.substr(index, 3) == list[0] && duplicate!=0) {
                duplicate = 0;
                index += 3;
            }
            else if (s.substr(index, 2) == list[1] && duplicate != 1) {
                duplicate = 1;
                index += 2;
            }
            else if (s.substr(index, 3) == list[2] && duplicate != 2) {
                duplicate = 2;
                index += 3;
            }
            else if (s.substr(index, 2) == list[3] && duplicate != 3) {
                duplicate = 3;
                index += 2;
            }
            else {
                index++;
                pronounceable = false;
            }
        }
        if (pronounceable == true) answer++;
    }
    return answer;
}