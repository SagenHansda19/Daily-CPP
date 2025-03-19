#include <bits/stdc++.h>
using namespace std;

void solve() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> g(r, vector<int>(c));
    vector<int> cost(r * c, 0);
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            int x; cin >> x; x--;
            g[i][j] = x;
            if(cost[x] == 0) cost[x] = 1;
            if(i > 0 && g[i - 1][j] == x) cost[x] = 2;
            if(j > 0 && g[i][j - 1] == x) cost[x] = 2;
        }
    }
    int ans = accumulate(cost.begin(), cost.end(), 0);
    int mx = *max_element(cost.begin(), cost.end());
    cout << ans - mx << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

