#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     int sumIndicesWithKSetBits(vector<int>& nums, int k) {
          int sum = 0;
          for(int i = 0; i < nums.size(); i++){
               int binary = 0;
               int x = i;
               while(x){
                    binary += x % 2;
                    if(binary > k){
                         break;
                    }
                    x /= 2;
               }
               if(binary == k){
                    sum += nums[i];
               }
          }
          return sum;
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
     int k;
     cin>>k;
     cout<<sol.sumIndicesWithKSetBits(nums, k)<<endl;
     return 0;
}