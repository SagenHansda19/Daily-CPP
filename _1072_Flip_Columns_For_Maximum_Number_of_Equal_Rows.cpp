#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
          int n = matrix.size();
          int m = matrix[0].size();
          unordered_map<string, int> mp;
          for(const auto &row : matrix){
               string temp = "";
               for(int j = 0; j < m; j++){
                    temp += (row[j] == row[0] ? '1' : '0');
               }
               mp[temp]++;
          }
          int maxi = 0;
          for(auto i : mp){
               maxi = max(maxi, i.second);
          }
          return maxi;
     }
};

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     Solution sol;
     vector<vector<int>> matrix = {{0, 1}, {1, 1}};
     cout << sol.maxEqualRowsAfterFlips(matrix) << endl;
     return 0;
}