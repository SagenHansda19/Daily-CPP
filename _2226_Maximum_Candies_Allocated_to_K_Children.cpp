#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maximumCandies(vector<int>& candies, ll k) {
        ll l = 1, r = *max_element(candies.begin(), candies.end());
        int ans = 0;
        while (l <= r) {
            ll m = l + (r - l) / 2;
            ll cc = 0;
            for (int i : candies) {
                cc += i / m;
            }
            if (cc >= k) {
                ans = m;
                l = m + 1;
            } else {
                r = m - 1;
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
    int val;
    ll k;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cin >> k;
    cout << sol.maximumCandies(a, k) << '\n';
    return 0;
}

