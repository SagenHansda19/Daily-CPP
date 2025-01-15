#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result = nums;
        for(auto num : nums){
            result.push_back(num);
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
     vector<int> res;
     res = sol.getConcatenation(nums);
     for(auto num : res){
          cout<<num<<" ";
     }
     return 0;
}