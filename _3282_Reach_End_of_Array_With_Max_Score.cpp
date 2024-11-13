#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     long long findMaximumScore(vector<int>& nums) {
          long long ans = 0;
          int j = 0, n = nums.size();
          for(int i = 0; i < n; i++){
               if(nums[i] > nums[j]){
                    ans += (long(nums[j]) * abs(i - j));
                    j = i;
               }
          }
          ans += (long(nums[j]) * (n - j - 1));
          return ans;
     }
};

int main(){
     Solution sol;
     vector<int> nums = {1, 2, 3, 4, 5};
     cout << sol.findMaximumScore(nums) << endl;
     return 0;
}