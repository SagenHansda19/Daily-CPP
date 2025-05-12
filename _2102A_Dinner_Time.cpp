#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    if(n % p == 0 && q * (n / p) != m) cout << "No\n";
    else cout << "Yes\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

