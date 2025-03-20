#include <bits/stdc++.h>
using namespace std;

bool is(vector<vector<int>>& g) {
    if(g[0][0] >= g[0][1] || g[0][0] >= g[1][0] || g[1][0] >= g[1][1] || g[0][1] >= g[1][1]) return false;
    return true;
}

void solve() {
    vector<vector<int>> g(2, vector<int>(2));
    for(auto &i : g) {
        for(int &j : i) {
            cin >> j;
        }
    }
    for(int k = 0; k < 4; k++) {
        if(is(g)) {
            cout << "Yes\n";
            return;
        }
        swap(g[0][0], g[0][1]);
        swap(g[1][0], g[1][1]);
        swap(g[0][0], g[1][1]);
    }
    cout << "No\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

