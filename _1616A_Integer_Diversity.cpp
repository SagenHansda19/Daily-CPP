#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    unordered_map<int, int> f;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        x = abs(x);
        f[x]++;
    }
    int ans = f.size();
    for(auto i : f) {
        if(i.second > 1 && i.first != 0) ans++;
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

