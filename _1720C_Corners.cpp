#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, sum = 0;
    cin >> n >> m;
    vector<vector<int>> g(n, vector<int>(m, 0));
    string s;
    for(int i = 0; i < n; i++) {
        cin >> s;
        for(int j = 0; j < m; j++) {
            g[i][j] = s[j] - '0';
            sum += g[i][j];
        }
    }
    int mm = INT_MAX;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < m - 1; j++) {
            int x = g[i][j] + g[i + 1][j] + g[i][j + 1] + g[i + 1][j + 1];
            if(x == 0) continue;
            mm = min(mm, max(1, x - 1));
        }
    }
    cout << (sum == 0 ? 0 : 1 + sum - mm);
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

