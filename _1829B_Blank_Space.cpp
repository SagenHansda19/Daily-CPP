#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int ans = 0, cur = 0;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(x == 0) {
            cur++;
            ans = max(ans, cur);
        } else {
            cur = 0;
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

