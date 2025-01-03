#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long ans = 0;
        int prev = -1;
        int j = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == prev) {
                j = i;
            }
            ans += i - j + 1;
            prev = nums[i];
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	Solution sol;
  	vector<int> nums;
  	int val;
  	while(cin >> val) {
  		nums.push_back(val);
  		if(cin.get() == '\n') break;
  	}  
  	cout << sol.countAlternatingSubarrays(nums);
    return 0;
}
