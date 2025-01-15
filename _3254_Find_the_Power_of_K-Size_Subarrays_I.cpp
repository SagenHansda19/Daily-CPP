#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     vector<int> resultsArray(vector<int>& nums, int k) {
          int n = nums.size();
          vector<int> ans;
          for(int i = 0; i <= n - k; i++){
               bool isCon = true;
               for(int j = i + 1; j < i + k; j++){
                    if(nums[j] != nums[j - 1] + 1) {
                         isCon = false;
                         break;
                    }
               }
               if(isCon) ans.push_back(nums[i + k - 1]);
               else ans.push_back(-1);
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
     while(cin>>val){
          nums.push_back(val);
          if(cin.get() == '\n') break;
     }
     cin>>k;
     vector<int> res = sol.resultsArray(nums, k);
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