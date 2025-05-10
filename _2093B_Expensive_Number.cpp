#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int p = s.size() - 1;
    while (s[p] == '0') {
        p--;
    }
    int ans = s.size() - p - 1 + p - count(s.begin(), s.begin() + p, '0');
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

