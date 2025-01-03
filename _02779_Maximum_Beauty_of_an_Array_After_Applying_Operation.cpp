#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0, ans = 0;
        for(int j = 0; j < n; j++) {
            while(nums[j] - nums[i] > 2* k) i++;
            ans = max(ans, j - i + 1);
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
  	int k; cin >> k;
  	cout << sol.maximumBeauty(nums, k);
    return 0;
}
    