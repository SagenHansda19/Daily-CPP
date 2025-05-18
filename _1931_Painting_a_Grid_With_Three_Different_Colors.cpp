#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

class Solution {
   public:
    vector<vector<int>> t;
    vector<string> colState;
    const int mod = 1e9 + 7;

    void genColState(string currCol, int rowRem, char prevColor) {
        if (rowRem == 0) {
            colState.push_back(currCol);
            return;
        }
        for (char c : {'R', 'G', 'B'}) {
            if (c == prevColor) continue;
            genColState(currCol + c, rowRem - 1, c);
        }
    }

    int solve(int remCol, int prevColIdx, int m) {
        if (remCol == 0) return 1;
        if (t[remCol][prevColIdx] != -1) return t[remCol][prevColIdx];
        int totWays = 0;
        int n = colState.size();
        string prevCol = colState[prevColIdx];
        for (int i = 0; i < n; i++) {
            string nextCol = colState[i];
            bool is = true;
            for (int r = 0; r < m; r++) {
                if (prevCol[r] == nextCol[r]) {
                    is = false;
                    break;
                }
            }
            if (is) totWays = (totWays + solve(remCol - 1, i, m)) % mod;
        }
        return t[remCol][prevColIdx] = totWays;
    }
    int colorTheGrid(int m, int n) {
        colState.clear();
        genColState("", m, '#');
        int nn = colState.size();
        t.assign(n, vector<int>(nn, -1));
        int ans = 0;
        for (int i = 0; i < nn; i++) {
            ans = (ans + solve(n - 1, i, m)) % mod;
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int m, n;
    cin >> m >> n;
    cout << sol.colorTheGrid(m, n) << '\n';
    return 0;
}
