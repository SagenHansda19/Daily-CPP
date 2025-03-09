#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    for(int i = 1; i < n; i++) {
        if(s[i] == '?' && s[i - 1] != '?') {
            s[i] = (s[i - 1] == 'R' ? 'B' : 'R');   
        }
    }
    if(s[n - 1] == '?') s[n - 1] = 'R';
    for(int i = n - 2; i >= 0; i--) {
        if(s[i] == '?') {
            s[i] = (s[i + 1] == 'R' ? 'B' : 'R');
        }
    }
    cout << s << '\n';
}   

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

