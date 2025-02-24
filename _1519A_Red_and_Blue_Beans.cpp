#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long r, b, d;
    cin >> r >> b >> d;
    if(r > b) swap(r, b);
    cout << (r * (d + 1) >= b ? "Yes\n" : "No\n");
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

