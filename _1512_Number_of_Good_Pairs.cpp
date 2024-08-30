#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for (int i=0; i<nums.size(); i++){
            for(int j=i; j<nums.size(); j++){
                if((nums[i] == nums[j]) && i<j){
                    count++;
                }
            }
        }
        return count;
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
     cout<<sol.numIdenticalPairs(nums);
     return 0;
     //jk
}