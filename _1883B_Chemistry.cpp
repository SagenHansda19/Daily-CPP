#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<int> f(26);
    for(char c : s) {
        f[c - 'a']++;
    }
    int o = 0;
    for(int i = 0; i < 26; i++) {
        if(f[i] % 2 == 1) o++;
    }
    cout << (k >= o - 1 ? "Yes\n" : "No\n");
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

