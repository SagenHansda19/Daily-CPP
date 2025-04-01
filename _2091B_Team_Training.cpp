#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; 
    cin >> n >> x;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    sort(a.rbegin(), a.rend());
    int ans = 0;
    int ns = INT_MAX, nz = 1;
    for(int i = 0; i < n; i++) {
        ns = min(ns, a[i]);
        if(ns * nz >= x) {
            ans++;
            nz = 1;
        } else {
            ns = min(ns, a[i]);
            nz++;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}

