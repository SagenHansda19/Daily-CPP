#include <algorithm>
#include <cassert>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
using ll = long long;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<ll> x(n), r(n);
    for (ll &i : x) cin >> i;
    for (ll &i : r) cin >> i;
    map<ll, ll> v;
    auto isqrt = [&](ll x) {
        ll a = sqrt(x);
        while (a * a > x) a--;
        while ((a + 1) * (a + 1) <= x) a++;
        return a;
    };
    for (int i = 0; i < n; i++) {
        for (ll j = -r[i]; j <= r[i]; j++) {
            ll d = r[i] * r[i] - j * j;
            ll y = isqrt(d);
            v[x[i] + j] = max(v[x[i] + j], y);
        }
    }
    ll ans = 0;
    for (auto [_, f] : v) {
        ans += 2 * f + 1;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
