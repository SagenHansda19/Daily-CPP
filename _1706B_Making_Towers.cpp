#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int  &i : a) cin >> i;
    vector<vector<int>> b(n);
    for(int i = 0; i < n; i++) {
        b[--a[i]].push_back(i);
    }
    vector<int> ans(n);
    for(int i = 0; i < n; i++) {
        if(b[i].size() == 1) {
            ans[i]++;
        }
        else if(b[i].size() >= 2) {
            ans[i]++;
            for(size_t j = 1; j < b[i].size(); j++) {
                if((b[i][j] - b[i][j - 1] - 1) % 2 == 0) ans[i]++;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " \n"[i == n - 1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}

