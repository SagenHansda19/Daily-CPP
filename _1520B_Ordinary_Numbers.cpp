#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int ans = 0;
    for(ll i = 1; i <= n; i = i * 10 + 1) {
        for(int j = 1; j <= 9; j++) {
            if(i * j <= n) {
                ans++;
            }
        }
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

