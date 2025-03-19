#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n; cin >> n;
    string s = to_string(n);
    if(s[0] != '9' && s[0] - '0' > 4) {
        s[0] = (9 - (s[0] - '0')) + '0';
    }
    int sz = s.length();
    for(int i = 1; i < sz; i++) {
        if(s[i] - '0' > 4) {
            s[i] = (9 - (s[i] - '0')) + '0';
        }
    }
    cout << s << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

