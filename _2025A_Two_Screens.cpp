#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;
    int ns = s.length(), nt = t.length();
    int ans = ns + nt;
    int same = 0;
    for(int i = 0; i < min(ns, nt); i++) {
        if(s[i] == t[i]) same++;
        else break;
    }
    if(same > 0) ans -= same - 1;
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

