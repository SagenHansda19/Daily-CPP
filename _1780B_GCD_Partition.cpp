#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    ll ans = 1;
    ll sum = accumulate(a.begin(), a.end(), 0ll);
    ll x = 0;
    for(int i = 0; i < n - 1; i++) {
        x += a[i], sum -= a[i];
        ans = max(ans, __gcd(x, sum));
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

