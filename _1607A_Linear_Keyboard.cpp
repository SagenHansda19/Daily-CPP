#include <bits/stdc++.h>
using namespace std;

void solve() {
    string k, s;
    cin >> k >> s;
    map<char, int> kk;
    for(int i = 0; i < 26; i++) {
        kk[k[i]] = i;
    }
    int ans = 0, n = s.length();
    for(int i = 1; i < n; i++) {
        ans += abs(kk[s[i]] - kk[s[i - 1]]);
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

