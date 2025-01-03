#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     string restoreString(string s, vector<int>& indices) {
          int n = s.length();
          string ans(n, ' ');
          for(int i = 0; i < n; i++){
               int idx = indices[i];
               ans[idx] = s[i];
          }
          return ans;
     }
};

int main(){
     Solution sol;
     string s = "codeleet";
     vector<int> indices = {4,5,6,7,0,2,1,3};
     cout << sol.restoreString(s, indices) << endl;
     return 0;
}