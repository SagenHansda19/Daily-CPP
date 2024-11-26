#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     int findChampion(int n, vector<vector<int>>& edges) {
          vector<int> indegree(n, 0);
          for(const vector<int>& list : edges){
               indegree[list[1]]++;
          }
          int zerocount = 0;
          int ans = 0;
          for(int i = 0; i < n; i++){
               if(indegree[i] == 0) {
                    ans = i;
                    zerocount++;
               }
          }
          if(zerocount == 1) return ans;
          else if(zerocount > 1) return -1; 
          return -1;
     }
};

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     Solution sol;
     int n; cin >> n;
     vector<vector<int>> edges = {
          {0, 2},
          {1, 3},
          {1, 2},
     };
     cout << sol.findChampion(n, edges);   
     return 0;
}