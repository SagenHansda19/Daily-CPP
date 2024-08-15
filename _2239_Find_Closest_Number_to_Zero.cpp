#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
     int findClosestNumber(vector<int>& nums) {
          int closest = nums[0];
          for(int i=0; i<nums.size(); i++)
          {
               if(abs(nums[i]) < abs(closest))
               {
                    closest = nums[i];
               }
               }
          for(int i=0; i<nums.size(); i++)
          {
               if(closest < 0 && nums[i] == abs(closest))
               {
                    return abs(closest);
               }
          }
          return closest;
     }
};

int main()
{
     Solution sol;
     int val;
     vector<int> nums;
     while(true)
     {
          cin>>val;
          nums.push_back(val);
          if(cin.get() == '\n')
          {
               break;
          }
     }
     cout<<sol.findClosestNumber(nums);
     return 0;
}