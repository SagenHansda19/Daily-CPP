#include <bits/stdc++.h>
using namespace std;

class Solution {
    int dfs(int row, int col, vector<vector<int>>& grid) {
        int r = grid.size(), c = grid[0].size();
        if(row < 0 || col < 0 || row >= r || col >= c || grid[row][col] == 0) return 0;
        int cur = grid[row][col];
        grid[row][col] = 0;
        cur += dfs(row + 1, col, grid);
        cur += dfs(row - 1, col, grid);
        cur += dfs(row, col + 1, grid);
        cur += dfs(row, col - 1, grid);
        return cur;
    }
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int r = grid.size(), c = grid[0].size(), ans = 0;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(grid[i][j] != 0) {
                    ans = max(ans, dfs(i,j, grid));
                }
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
    cout << sol.findMaxFish(grid) << '\n';    
    return 0;
}

