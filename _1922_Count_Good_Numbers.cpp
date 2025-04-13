#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
    const int mod = 1000000007;
    int qum(int x, ll y) {
        int ans = 1, mul = x;
        while(y > 0) {
            if(y & 1) ans = (ll)ans * mul % mod;
            mul = (ll)mul * mul % mod;
            y /= 2;
        }
        return ans;
    }
public:
    int countGoodNumbers(long long n) {
        return (ll)qum(5, (n + 1) / 2) * qum(4, n / 2) % mod;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    ll n; cin >> n;
    cout << sol.countGoodNumbers(n) << '\n';
    return 0;
}

