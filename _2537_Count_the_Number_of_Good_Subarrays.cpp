#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        map<int, int> f;
        int n = nums.size();
        int l = 0, r = 0;
        long long ans = 0, nop = 0;
        while(r < n) {
            nop += f[nums[r]];
            f[nums[r++]]++;
            // cout << nop << ' ';
            while(nop >= k) {
                ans += (n - r + 1);
                f[nums[l]]--;
                nop -= f[nums[l++]];
            }
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int k;
    while(cin >> k) {
        a.push_back(k);
        if(cin.get() == '\n') break;
    }
    cin >> k;
    cout << sol.countGood(a, k) << '\n';
    return 0;
}

