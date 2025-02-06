#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 1, cur = 1;
    for(int i = 1; i < n; i++) {
        if(s[i] != s[i - 1]) cur = 1;
        else cur++;
        ans = max(ans, cur);
    }
    cout << ans + 1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

