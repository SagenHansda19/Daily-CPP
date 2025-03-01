#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size(), i = 1, ans = nums[0], mx_mul = nums[0], mn_mul = nums[0];
        while(i < n) {
            if(nums[i] < 0) swap(mx_mul, mn_mul);
            mx_mul = max(nums[i], mx_mul * nums[i]);
            mn_mul = min(nums[i], mn_mul * nums[i]);
            ans = max(ans, mx_mul);
            i++;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int val;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cout << sol.maxProduct(a) << '\n';
    return 0;
}

