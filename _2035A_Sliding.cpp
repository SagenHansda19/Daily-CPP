#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, m, r, c;
    cin >> n >> m >> r >> c;
    cout << ((n - r) * (2 * m - 1) + (m - c)) << '\n';
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

