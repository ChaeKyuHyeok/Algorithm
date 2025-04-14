#include <string>
#include <vector>

using namespace std;

int zero_cnt = 0;
int one_cnt = 0;

void dfs_compress(vector<vector<int>>& arr, int x, int y, int size)
{
    int val = arr[x][y];
    bool isSame = true;

    for (int i = x; i < x + size; ++i) {
        for (int j = y; j < y + size; ++j) {
            if (arr[i][j] != val) {
                isSame = false;
                break;
            }
        }
        if (!isSame) break;
    }

    if (isSame) {
        if (val == 0) zero_cnt++;
        else one_cnt++;
    } else {
        int half = size / 2;
        dfs_compress(arr, x, y, half);
        dfs_compress(arr, x, y + half, half);
        dfs_compress(arr, x + half, y, half);
        dfs_compress(arr, x + half, y + half, half);
    }
}

vector<int> solution(vector<vector<int>> arr) {
    zero_cnt = 0;
    one_cnt = 0;
    
    dfs_compress(arr, 0, 0, arr.size());
    
    return {zero_cnt, one_cnt};
}