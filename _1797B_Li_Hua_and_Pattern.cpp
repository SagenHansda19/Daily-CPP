#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(n));
    for(auto &i : a) {
        for(int &j : i) cin >> j;
    }
    int dif = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] != a[n - 1 - i][n - 1 - j]) dif++;
        }
    }
    dif /= 2;
    if(dif > k) {
        cout << "No\n";
    } else {
        k -= dif;
        if(n & 1) cout << "Yes\n";
        else if(k & 1) cout << "No\n";
        else cout << "Yes\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

