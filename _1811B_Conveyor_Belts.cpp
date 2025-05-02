#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    n /= 2;
    int x = max({a - n, n + 1 - a, b - n, n + 1 - b});
    int y = max({c - n, n + 1 - c, d - n, n + 1 - d});
    cout << abs(x - y) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

