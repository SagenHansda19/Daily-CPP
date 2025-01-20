#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int row = mat.size(), col = mat[0].size();
        vector<pair<int, int>> made(row * col + 1);
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) made[mat[i][j]] = {i, j};
        }
        int ans = 0;
        vector<int> rows(row, 0), cols(col, 0);
        for(int i = 0; i < arr.size(); i++) {
            auto [a, b] = made[arr[i]];
            rows[a]++;
            cols[b]++;
            if(cols[b] == row || rows[a] == col) return i;
        }
        return -1;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> arr;
    int val;
    while(cin >> val) {
        arr.push_back(val);
        if(cin.get() == '\n') break;
    }
    vector<vector<int>> grid;
    vector<int> row;
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
    cout << sol.firstCompleteIndex(arr, grid) << '\n';
    return 0;
}

