#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++) {
        if(s.substr(i, 3) == "...") {
            cout << "2\n";
            return;
        }
    }
    int ans = 0;
    for(char c : s) {
        if(c == '.') ans++;
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

