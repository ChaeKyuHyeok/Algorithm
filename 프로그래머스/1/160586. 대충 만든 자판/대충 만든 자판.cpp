#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    map<char, int> kmap;
    
    for(int i=0; i<keymap.size(); i++) {
        for(int j=0; j<keymap[i].size(); j++) {
            if(kmap.find(keymap[i][j])==kmap.end())
                kmap.insert(pair<char, int>(keymap[i][j], j+1));
            else {
                if(kmap[keymap[i][j]] > j+1)
                    kmap[keymap[i][j]] = j+1;
            }
        }
    }
    
    for(int i=0; i<targets.size(); i++) {
        int count = 0;
        for(int j=0; j<targets[i].size(); j++) {
            if(kmap.find(targets[i][j]) == kmap.end()) {
                count = -1;
                break;
            }
            count += kmap[targets[i][j]];
        }
        answer.push_back(count);
    }
    return answer;
}