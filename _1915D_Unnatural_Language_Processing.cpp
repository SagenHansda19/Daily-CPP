#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    string ans = "";
    while(!s.empty()) {
        int r = 0;
        if(s.back() == 'a' || s.back() == 'e') r = 2;
        else r = 3;
        while(r--) {
            ans += s.back();
            s.pop_back();
        }
        ans += '.';
    }
    ans.pop_back();
    reverse(ans.begin(), ans.end());
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

