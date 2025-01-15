#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    x = min(x, n);
    vector<vector<int>> f(x);
    for(int i = 0; i < n; i++) {
        f[a[i] % x].push_back(a[i]);
    }
    for(int i = 0; i < x; i++) {
        sort(f[i].begin(), f[i].end(), greater());
    }
    int ans = 0;
    while(!f[ans % x].empty() && f[ans % x].back() <= ans) {
        f[ans % x].pop_back();
        ans++;
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

