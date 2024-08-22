#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

class Solution {
public:
     bool increasingTriplet(vector<int>& nums) {
          int n = nums.size();
          if(n < 3)return false;
          int s1 = INT_MAX;
          int s2 = INT_MAX;
          for (int i = 0; i < n; i++){
               if(nums[i] <= s1){
                    s1 = nums[i];
                    }
               else if(nums[i] <= s2){
                    s2 = nums[i];
               }
               else{
                    return true;
               }
          }
          return false;
     }
};

int main(){
     Solution sol;
     vector<int> nums;
     int val;
     while(cin >> val){
          nums.push_back(val);
          if(cin.get() == '\n'){
               break;
          }
     }
     bool result = sol.increasingTriplet(nums);
     if(result){
          cout<<"True"<<endl;
     }
     else{
          cout<<"False"<<endl;
     }
     return 0;
}