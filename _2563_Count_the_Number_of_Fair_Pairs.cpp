#include <bits/stdc++.h>
using namespace std;

class Solution {
    using ll = long long;
public:
    ll countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        ll ans = 0;
        int n = nums.size();
        for(int i = 0; i < n - 1; i++) {
            // nums[j] >= lower - nums[i]
            int l = lower_bound(nums.begin() + i + 1, nums.end(), lower - nums[i]) - nums.begin();
            // nums[j] <= upper - nums[i]
            int r = upper_bound(nums.begin() + i + 1, nums.end(), upper - nums[i]) - nums.begin();
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
    int x, y;
    while(cin >> x) {
        a.push_back(x);
        if(cin.get() == '\n') break;
    }
    cin >> x >> y;
    cout << sol.countFairPairs(a, x, y) << '\n';
    return 0;
}

