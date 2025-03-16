#include <bits/stdc++.h>
using namespace std;

void solve() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> g(r, vector<int>(c));
    for(int i = 0; i < r; i++) {
        string s; cin >> s;
        for(int j = 0; j < c; j++) {
            g[i][j] = s[j] - '0';
        }
    }
    int br = 0;
    for(int i = 0; i < r; i++) {
        int xr = g[i][0];
        for(int j = 1; j < c; j++) {
            xr ^= g[i][j];
        }
        if(xr == 1) br++;
    }
    vector<int> cxr;
    for(int i = 0; i < c; i++) {
        cxr.push_back(g[0][i]);
    }
    for(int i = 1; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cxr[j] ^= g[i][j];
        }
    }
    int bc = count(cxr.begin(), cxr.end(), 1);
    cout << max(br, bc) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

