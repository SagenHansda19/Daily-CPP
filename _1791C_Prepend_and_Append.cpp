#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int l = 0, r = n - 1;
    int ans = n;
    while(l < r) {
        if(s[l] != s[r]) {
            ans -= 2;
        } else {
            break;
        }
        l++, r--;
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

