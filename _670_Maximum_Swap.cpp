#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     int maximumSwap(int num) {
          string nums = to_string(num);
          int n = nums.size();
          vector<int> last(10, -1);
          for(int i = 0; i < n; i++) last[nums[i] - '0'] = i;
          for(int i = 0; i < n; i++){
               for(int d = 9; d > nums[i] - '0'; d--){
                    if(last[d] > i){
                         swap(nums[i], nums[last[d]]);
                         return stoi(nums);
                    }
               }
          }
          return num;
     }
};

int main(){
     Solution sol;
     int num = 2736;
     cout<<sol.maximumSwap(num);
     return 0;   
}