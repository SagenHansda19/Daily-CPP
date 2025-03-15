#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    map<string, int> f;
    for(int i = 0; i < n - 1; i ++) {
        f[s.substr(i, 2)]++;
    }
    string ans = "";
    int mx = 0;
    for(auto i : f) {
        string str = i.first;
        int cnt = i.second;
        if(cnt > mx) {
            ans = i.first;
            mx = cnt;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

