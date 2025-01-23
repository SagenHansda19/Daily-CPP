#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int r = grid.size(), c = grid[0].size();
        vector<int> rowcom(r, 0), colcom(c, 0);
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(grid[i][j] == 1) {
                    rowcom[i]++;
                    colcom[j]++;
                }
            }
        }
        // for(int i : rowcom) cout << i << " ";
        // cout << '\n';
        // for(int i : colcom) cout << i << " ";
        int ans = 0;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(grid[i][j] == 1 && (rowcom[i] > 1 || colcom[j] > 1)) ans++;
            }
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
    cout << sol.countServers(grid) << '\n';
    return 0;
}

