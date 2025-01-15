#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     long long maximumSubarraySum(vector<int>& nums, int k) {
          int n = nums.size();
          long long currsum = 0, maxsum = 0;
          unordered_map<int, int> fr;
          for(int i = 0; i < n; i++){
               currsum += nums[i];
               fr[nums[i]]++;
               if(i >= k){
                    currsum -= nums[i - k];
                    fr[nums[i - k]]--;
                    if(fr[nums[i - k]] == 0) fr.erase(nums[i - k]);
               }
               if(fr.size() == k) maxsum = max(maxsum, currsum);
          }
          return maxsum;
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
     cout << sol.maximumSubarraySum(nums, k) << endl;
     return 0;
}