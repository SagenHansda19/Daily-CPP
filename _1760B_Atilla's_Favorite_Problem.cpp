#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    for(char c : s) {
        ans = max(ans, c - 'a');
    }
    //ans -= 97;
    cout << ans + 1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

