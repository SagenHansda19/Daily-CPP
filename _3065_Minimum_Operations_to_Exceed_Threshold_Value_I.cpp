#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     int minOperations(vector<int>& nums, int k) {
          int count = 0;
          for(int i = 0; i < nums.size(); i++){
               if(nums[i] < k){
                    count++;
               }
          }
          return count;
     }
};

int main(){
     Solution sol;
     vector<int> nums;
     int val,k;
     while(cin>>val){
          nums.push_back(val);
          if(cin.get() == '\n'){
               break;
          }
     }
     cin>>k;
     cout<<sol.minOperations(nums,k)<<endl;
}