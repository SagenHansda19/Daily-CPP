#include <bits/stdc++.h>
using namespace std;

class Solution {
    using ll = long long;
    const int mod = 1e9 + 7;

    vector<vector<ll>> mulMat(vector<vector<ll>>& a, vector<vector<ll>>& b) {
        int ra = a.size(), ca = a[0].size(), rb = b.size(), cb = b[0].size();
        vector<vector<__int128_t>> temp(ra, vector<__int128_t>(cb, 0));
        vector<vector<ll>> ans(ra, vector<ll>(cb, 0));
        for(int i = 0; i < ra; i++) {
            for(int j = 0; j < cb; j++) {
                for(int k = 0; k < ca; k++) {
                    temp[i][j] += a[i][k] * b[k][j];
                }
                ans[i][j] = temp[i][j] % mod;
            }
        }
        return ans;
    }

    vector<vector<ll>> powMat(vector<vector<ll>> a, ll x) {
        int r = a.size(), c = a[0].size();
        vector<vector<ll>> ans(r, vector<ll>(c, 0));
        for(int i = 0; i < r; i++) {
            ans[i][i] = 1; //identity matrix
        }
        while(x > 0) {
            if(x & 1) ans = mulMat(ans, a);
            a = mulMat(a, a);
            x /= 2;
        }
        return ans;
    }
public:
    int lengthAfterTransformations(string s, int t, vector<int>& nums) {
        vector<vector<ll>> cng(26, vector<ll>(26, 0));
        for(int i = 0; i < 26; i++) {
            for(int j = 0; j < nums[i]; j++) {
                cng[i][(i + 1 + j) % 26]++;
            }
        }
        cng = powMat(cng, t);
        vector<vector<ll>> f(1, vector<ll>(26, 0));
        for(char c : s) {
            f[0][c - 'a']++;
        }
        f = mulMat(f, cng);
        int ans = 0;
        for(int i : f[0]) {
            ans += i;
            ans %= mod;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s; cin >> s;
    int t; cin >> t;
    vector<int> a;
    int b;
    while(cin >> b) {
        a.push_back(b);
        if(cin.get() == '\n') break;
    }
    cout << sol.lengthAfterTransformations(s, t, a) << '\n';
    return 0;
}

