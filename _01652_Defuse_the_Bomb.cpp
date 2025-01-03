#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     vector<int> decrypt(vector<int>& code, int k) {
          int n = code.size();
          vector<int> ans(n, 0);
          if(k == 0) return ans;
          for(int i = 0; i < n; i++){
               int sum = 0;
               if(k > 0){
                    for(int j = 1; j <= k; j++){
                         sum += code[(i + j) % n];
                    }
               }
               else{
                    for(int j = 1; j <= -k; j++){
                         sum += code[(i - j + n) % n];
                    }
               }
               ans[i] = sum;
          }
          return ans;
     }
};

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     Solution sol;
     vector<int> nums;
     int k, val;
     while(cin >> val){
          nums.push_back(val);
          if(cin.get() == '\n') break;
     }
     cin >> k;
     vector<int> res = sol.decrypt(nums, k);
     cout << "[";
     for(int i=0; res.size() > 0 && i<res.size(); i++){
         cout << res[i];
         if(i != res.size()-1){
             cout << ", ";
         }
     }
     cout<<"]";
     return 0;
}