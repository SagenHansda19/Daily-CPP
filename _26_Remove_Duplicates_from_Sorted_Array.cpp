#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     int removeDuplicates(vector<int>& nums) {
          int j = 1;
          for(int i = 1; i < nums.size(); i++){
               if(nums[i] != nums[i - 1]){
                    nums[j] = nums[i];
                    j++;
               }
          }
          return j;
     }
};

//ans

int main(){
     Solution sol;
     vector<int> nums;
     int val;
     while(cin>>val){
          if(val == '\n') break;
          nums.push_back(val);
     }
     cout<<sol.removeDuplicates(nums);
     return 0;
}