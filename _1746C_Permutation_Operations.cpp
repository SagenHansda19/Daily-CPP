#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    for(int i = n - 1; i > 0; i--) {
        a[i] -= a[i - 1];
    }
    vector<int> ans(n);
    iota(ans.begin(), ans.end(), 0);
    sort(ans.begin(), ans.end(), [&](int i, int j) {
        return a[i] > a[j];        
    });
    for(int i = 0; i < n; i++) {
        cout << ans[i] + 1 << " \n"[i == n - 1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

