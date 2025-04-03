#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;

void solve() {
    int n; cin >> n;    
    int ans = 1ll * n * (n + 1) % mod * (n + n + 1) % mod * (mod + 1) / 3 % mod;
    ans = (ans - 1ll * n * (n + 1) / 2 % mod + mod) % mod;
    cout << 2022ll * ans % mod<< '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

