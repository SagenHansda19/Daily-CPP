#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    if(s[n - 1] == 'B') {
        if(count(s.begin(), s.end(), 'B') == 1) cout << "Alice\n";
        else cout << "Bob\n";
        return;
    }
    if(s[0] == 'A' || s[n - 2] == 'A') cout << "Alice\n";
    else cout << "Bob\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

