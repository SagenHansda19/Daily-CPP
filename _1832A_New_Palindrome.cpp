#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    string t;
    int n = s.length();
    for(int i = 0; i < n / 2; i++) {
        t.push_back(s[i]);
    }
    sort(t.begin(), t.end());
    cout << (t.back() != t[0] ? "Yes\n" : "No\n");
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

