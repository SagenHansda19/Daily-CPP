#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    cout << ((n * n + 1) / 4) + 1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

