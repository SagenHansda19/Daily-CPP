#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     int findmax (vector<vector<int>>& grid, int row, int col) { 
          int mm = grid[row][col];
          for(int i = row; i < row + 3; i++){
               for(int j = col; j < col + 3; j++){
                    mm = max(mm, grid[i][j]);
               }
          }
          return mm;
     }
     vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
          int nrow = grid.size();
          int ncol = grid[0].size();
          vector<vector<int>> ans(nrow - 2, vector<int>(ncol - 2));
          
          for(int row = 0; row < nrow - 2; row++){
               for(int col = 0; col < ncol - 2; col++){
                    ans[row][col] = findmax(grid, row, col);
               }
          }
          return ans;
     }
};

int main(){
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
     vector<vector<int>> ans = sol.largestLocal(grid);
     for (const auto& row : ans) {
          for (int val : row) {
               cout << val << " ";
          }
          cout << endl;
     }
}