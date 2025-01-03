#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(j != i && nums[j] < nums[i]){
                    count ++;
                }
            }
            result.push_back(count);
            count = 0;
        }
        return result;
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
     vector<int> res = sol.smallerNumbersThanCurrent(nums);
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