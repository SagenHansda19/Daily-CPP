#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            res.push_back(nums[nums[i]]);
        }
        return res;
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
     vector<int> res = sol.buildArray(nums);
     cout << "[";
     for(int i=0; i<res.size(); i++){
          cout << res[i];
          if(i != res.size()-1){
               cout << ", ";
          }
     }
     cout<<"]";
     return 0;
}