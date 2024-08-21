class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
          int n = nums.size();
          long long count;
          vector<int> result(n, 1);
          int pro = 1;
          for(int i : nums){
               pro *= i;
          }
          if(pro != 0){
               for(int i = 0; i<n; i++){
                    result[i] = pro/nums[i];
               }
          }
          else {
               for(int j=0; j<n; j++){
                    if(nums[j] == 0){
                         for(int i=0; i<n; i++){
                         if(i != j){
                              count *= nums[i];
                         }
                    `   }
                    result[j] = count;
                    count = 1;
                    }
                    else
                    result[j] = pro;
               }
          }
     return result;
     }
};