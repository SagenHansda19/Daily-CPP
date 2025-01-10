#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int prefixl = 1;
    int sufixl = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] == a[0]) prefixl++;
        else break;
    }
    for(int i = n - 2; i >=0; i--) {
        if(a[i] == a[n - 1]) sufixl++;
        else break;
    }
    int ans;
    if(a[0] == a[n - 1]) {
        ans = n - (prefixl + sufixl);
    } else {
        ans = n - max(prefixl, sufixl);
    }
    cout << max(0, ans) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

