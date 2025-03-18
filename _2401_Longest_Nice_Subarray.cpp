#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int ans = 1, l = 0, r = 0, n = nums.size();
        int cur_sum = 0, xor_sum = 0;
        while(r < n) {
            cur_sum += nums[r];
            xor_sum ^= nums[r];
            r++;
            while(cur_sum != xor_sum) {
                cur_sum -= nums[l];
                xor_sum ^= nums[l];
                l++;
            }
            ans = max(ans, r - l);
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
    cout << sol.longestNiceSubarray(a) << '\n';
    return 0;
}

