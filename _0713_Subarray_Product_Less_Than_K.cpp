#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long long mul = 1;
        int n = nums.size(), l = 0, r = 0, ans = 0;
        while(r < n) {
            mul *= nums[r++];
            while(mul >= k && l < r) {
                mul /= nums[l++];
            }
            ans += r - l;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int val, k;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cin >> k;
    cout << sol.numSubarrayProductLessThanK(a, k) << '\n';
    return 0;
}

