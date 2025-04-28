#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
    public:
    ll countSubarrays(vector<int>& nums, ll k) {
        int n = nums.size(), l = 0, r = 0;
        ll ans = 0, sum = 0;
        while(r < n) {
            sum += nums[r++];
            while(sum * (r - l) >= k && l <= r) {
                sum -= nums[l++];
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
    ll b;
    int x;
    while(cin >> x) {
        a.push_back(b);
        if(cin.get() == '\n') break;
    }
    cin >> b;
    cout << sol.countSubarrays(a, b) << '\n';
    return 0;
}

