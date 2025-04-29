#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
    public:
    ll countSubarrays(vector<int>& nums, int k) {
        int mx = *max_element(nums.begin(), nums.end());
        int n = nums.size();
        int cnt = 0, l = 0, r = 0;
        ll ans = 0;
        while(r < n) {
            cnt += (nums[r] == mx);
            r++;
            while(cnt == k) {
                cnt -= (nums[l] == mx);
                l++;
            }
            ans += l;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int b;
    while(cin >> b) {
        a.push_back(b);
        if(cin.get() == '\n') break;
    }
    cin >> b;
    cout << sol.countSubarrays(a, b) << '\n';
    return 0;
}

