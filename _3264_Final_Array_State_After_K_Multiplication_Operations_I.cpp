#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
          for(int i = 0; i < k; i++){
               int minel = *min_element(nums.begin(), nums.end());
               auto it = find(nums.begin(), nums.end(), minel);
               int minid = it - nums.begin();
               nums[minid] = minel * multiplier;
          }
          return nums;
     }
};

int main(){
     Solution sol;
     vector<int> nums;
     int k, multiplier, val;
     while(cin>>val){
          nums.push_back(val);
          if(cin.get() == '\n') break;
     }
     cin>>k>>multiplier;
     vector<int> ans = sol.getFinalState(nums, k, multiplier);
     for(int i : ans) cout<<i<<" ";
     cout<<endl;
     return 0;
}    