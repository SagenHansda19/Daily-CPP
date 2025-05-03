#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    if((a + b + c) % 3 != 0 || b > (a + b + c) / 3) cout << "No\n";
    else cout << "Yes\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

