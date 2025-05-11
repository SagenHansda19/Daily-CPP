#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int l = 1, r = n;
    vector<int> ans(n);
    for(int i = n - 2; i >=  0; i--) {
        if(s[i] == '<') {
            ans[i + 1] = l;
            l++;
        }
        if(s[i] == '>') {
            ans[i + 1] = r;
            r--;
        }
    }
    ans[0] = l;
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " \n"[i == n - 1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

