#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for (int i=0; i<nums.size(); i++){
            if(nums[i] % 3 != 0){
                count++;
            }
        }
        return count;
    }
};

using namespace std;
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
     cout<<sol.minimumOperations(nums);
     return 0;
}