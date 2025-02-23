#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int ans = a[0];
    for(int i = 1; i < n; i++) {
        ans ^= a[i];
    }
    for(int i = 0; i < n; i++) {
        a[i] ^= ans;
    }
    int aa = a[0];
    for(int i = 1;i < n; i++) {
        aa ^= a[i];
    }
    if(aa != 0) {
        cout << "-1\n";
        return;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

