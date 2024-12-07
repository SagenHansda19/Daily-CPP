#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int l = 1, r = *max_element(nums.begin(), nums.end());
        int ans = r;

        while(l <= r) {
            int mid = l + (r - l) / 2, op = 0;
            for(int n : nums) {
                op += (n - 1) / mid;
                if(op > maxOperations) break;
            }
            if(op <= maxOperations) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
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
  	int m; cin >> m;
  	cout << sol.minimumSize(nums, m);
    return 0;
}
    