#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    if(a * (a + 1) / 2 < c) {
        cout << "No\n";
        return;
    }
    if(b * (b + 1) / 2 > c) {
        cout << "No\n";
        return;
    }
    if((a * (a + 1) / 2) - ((a - b) * (a - b + 1) / 2) < c) {
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

