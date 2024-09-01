#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i; j < nums.size(); j++){
                if((i < j) && (nums[i] + nums[j] < target)){
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
     int target = 3;
     while(cin>>val){
          if(cin.get() == '\n'){
               break;
          }
          nums.push_back(val);
     }
     cout<<sol.countPairs(nums, target);
     return 0;
}