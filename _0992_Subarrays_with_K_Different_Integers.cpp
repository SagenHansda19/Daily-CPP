#include <bits/stdc++.h>
using namespace std;

class Solution {
    int solve(vector<int>& nums, int k) {
        if(k < 0) return 0;
        int n = nums.size(), l = 0, r = 0, ans = 0;
        unordered_map<int, int> f;
        while(r < n) {
            f[nums[r]]++;
            r++;
            while(f.size() > k) {
                f[nums[l]]--;
                if(f[nums[l]] == 0) f.erase(nums[l]);
                l++;
            }
            ans += r - l + 1;
        }
        return ans;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums, k) - solve(nums, k - 1);
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
    cout << sol.subarraysWithKDistinct(a, k) << '\n';
    return 0;
}

