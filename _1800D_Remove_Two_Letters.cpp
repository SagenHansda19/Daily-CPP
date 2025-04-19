#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int x = 0;
    for(int i = 0; i < n - 2; i++) {
        if(s[i] == s[i + 2]) x++;
    }
    cout << n - 1 - x << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

