#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    cout << (n & 1 ? "Yes\n" : "No\n");
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

