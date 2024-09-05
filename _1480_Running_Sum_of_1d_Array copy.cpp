#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     vector<int> runningSum(vector<int>& nums) {
          for(int i = 1; i < nums.size(); i++){
               nums[i] = nums[i] + nums[i-1];
          }
          return nums;
     }
};

int main(){
     Solution sol;
     vector<int> nums;
     int val;
     while(cin>>val){
          nums.push_back(val);
          if(cin.get() == '\n'){
               break;
          }
     }
     vector<int> res = sol.runningSum(nums);
     cout << "[";
     for(int i=0; res.size() > 0 && i<res.size(); i++){
          cout << res[i];
          if(i != res.size()-1){
               cout << ", ";
          }
     }
     cout<<"]";
}