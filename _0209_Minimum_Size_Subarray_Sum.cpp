#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(), l = 0, r = 0, ans = INT_MAX, sum = 0;
        while(r < n) {
            sum += nums[r++];
            while(sum >= target) {
                ans = min(ans, r - l);
                sum -= nums[l++];
            }
        }
        return (ans == INT_MAX) ? 0 : ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int val, k;
    cin >> k;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cout << sol.minSubArrayLen(k, a) << '\n';
    return 0;
}

