#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     vector<int> leftRightDifference(vector<int>& nums) {
          int n = nums.size();
          vector<int> answer(n);
          vector<int> leftsum(n);
          vector<int> rightsum(n);
          leftsum[0] = rightsum[n-1] = 0;
          for (int i = 1; i < n; i++){
               leftsum[i] = leftsum[i-1] + nums[i-1];  //leftsum[0] = 0, leftsum[1] = leftsum[0] + nums[0] 
          }
          for(int j = n-2; j >= 0; j--){
               rightsum[j] = rightsum[j+1] + nums[j+1];
          }
          for(int k = 0; k < n; k++){
               answer[k] = abs(leftsum[k] - rightsum[k]);
          }
          return answer;
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
     vector<int> res = sol.leftRightDifference(nums);
     cout << "[";
     for(int i=0; res.size() > 0 && i<res.size(); i++){
         cout << res[i];
         if(i != res.size()-1){
             cout << ", ";
         }
     }
     cout<<"]";
}