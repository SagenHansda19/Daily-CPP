#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<vector<int>> g(n, vector<int>(n));
    for(auto &i : g) {
        for(int &j : i) cin >> j;
    }
    vector<int> ans(2 * n + 1);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(ans[i + j + 1] == 0) ans[i + j + 1] = g[i][j];
        }
    }
    vector<int> a(2 * n + 1, 0);
    for(int i : ans) {
        a[i]++;
    }
    int x = 0;
    for(int i = 0; i < 2 * n + 1; i++) {
        if(a[i] == 0) {
            x = i;
            break;
        }
    }
    for(int i = 0; i < ans.size(); i++) {
        if(ans[i] == 0) ans[i] = x;
    }
    for(int i = 0; i < 2 * n; i++) {
        cout << ans[i] << " \n"[i == 2 * n - 1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

