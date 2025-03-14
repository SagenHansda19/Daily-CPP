#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n; cin >> n;
    ll ans = 0;
    ans += 4 * n + 3 + (n - 1);
    n -= 2;
    ans += 2 * (n * (n + 1) / 2);
    ans -= 2;
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

