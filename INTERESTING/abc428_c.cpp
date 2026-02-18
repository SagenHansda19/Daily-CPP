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
    ll q; cin >> q;
    vi a{0}, b{0};
    while(q--) {
        ll x; cin >> x;
        if(x == 1) {
            char c; cin >> c;
            a.push_back(a.back() + (c == '(' ? 1 : -1));
            b.push_back(min(a.back(), b.back()));
        } else {
            a.pop_back();
            b.pop_back();
        }
        cout << (a.back() == 0 and b.back() == 0 ? "Yes\n" : "No\n");
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