#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;

void solve() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<vector<ll>> a(n, vector<ll>(m));
    for(auto &i : a) {
        for(ll &j : i) cin >> j;
    }
    int i = 0, j = 0;
    while(i + j < n + m - 1) {
        if(i + j == n + m - 2 || s[i + j] == 'D') {
            ll ans = 0;
            for(int x = 0; x < m; x++) {
                ans -= a[i][x];
            }
            a[i][j]= ans;
            i++;
        } else {
            ll ans = 0;
            for(int x = 0; x < n; x++) {
                ans -= a[x][j];
            }
            a[i][j] = ans;
            j++;
        }
    }
    for(auto &i : a) {
        for(ll &j : i) cout << j << " ";
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

