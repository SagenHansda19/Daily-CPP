#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int c = grid[0].size();
        vector<long long> pre1(grid[0].begin(), grid[0].end());
        vector<long long> pre2(grid[1].begin(), grid[1].end());
        for(int j = 1; j < c; j++) {
            pre1[j] += pre1[j - 1];
            pre2[j] += pre2[j - 1];
        }
        long long ans = LLONG_MAX;
        for(int i = 0; i < c; i++) {
            long long top = pre1[c - 1] - pre1[i];
            long long bot = (i > 0) ? pre2[i - 1] : 0;
            long long second = max(top, bot);
            ans = min(ans, second);
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<vector<int>> grid;
    vector<int> row;
    int val;
    while (true) {
        cin >> val;
        row.push_back(val);
        if (cin.get() == '\n') {
            break;
        }
    }
    int n = row.size();
    grid.push_back(row);
    for (int i = 1; i < n; ++i) {
        vector<int> newRow;
        for (int j = 0; j < n; ++j) {
            cin >> val;
            newRow.push_back(val);
        }
        grid.push_back(newRow);
    }
    cout << sol.gridGame(grid) << '\n';
    return 0;
}

