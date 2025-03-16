#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int k = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] <= s[k]) k = i;
    } 
    s = s[k] + s.substr(0, k) + s.substr(k + 1);
    cout << s << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

