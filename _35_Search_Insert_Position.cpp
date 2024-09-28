#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     int searchInsert(vector<int>& nums, int target) {
          int l = 0;
          int r = nums.size() - 1;
          while(l <= r){
               int m = l + (r - l) / 2;
               if(nums[m] == target) return m;
               else if(nums[m] > target) r = m - 1;
               else l = m + 1;
          }
          return l;
     }
};

int main(){
     Solution sol;
     vector<int> nums;
     int val;
     while(cin>>val){
          nums.push_back(val);
          if(cin.get() == '\n') break;
     }
     int target;
     cin>>target;
     cout<<sol.searchInsert(nums, target);
     return 0;
}