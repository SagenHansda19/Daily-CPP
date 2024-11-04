#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     int countSquares(vector<vector<int>>& matrix) {
          int ans = 0;
          int row = matrix.size(), col = matrix[0].size();
          int hst = min(row, col);
          for(int i = 0; i < row; i++){
               for(int j = 0; j < col; j++){
                    if(matrix[i][j] == 1 && i > 0 && j > 0){
                         matrix[i][j] = min({matrix[i - 1][j], matrix[i][j - 1], matrix[i - 1][j - 1]}) + 1;
                    }
                    ans += matrix[i][j]; 
               }
          }
          return ans;
     }
};

int main(){
     vector<vector<int>> matrix = {{0,1,1,1},{1,1,1,1},{0,1,1,1}};
     Solution sol;
     cout<<sol.countSquares(matrix);
     return 0;
}