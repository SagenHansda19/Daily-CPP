#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<ll>;
using vvi = vector<vector<ll>>;
using pii = pair<ll, ll>;
using vpii = vector<pii>;
#define input(a) for(auto &i : a) cin >> i;

void solve() {
    ll n, q;
    cin >> n >> q;
    vi a(n + 1, 1);
    a[0] = 0;
    ll i = 1;
    while(q--) {
        ll x, y;
        cin >> x >> y;
        ll cur = 0;
        while(i <= x) {
            cur += a[i];
            a[y] += a[i];
            i++;
        }
        cout << cur << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}