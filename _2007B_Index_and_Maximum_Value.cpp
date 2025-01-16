#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int mx = INT_MIN;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    for(int i = 0; i < m; i++) {
        char s; 
        int l, r;
        cin >> s >> l >> r;
        if(mx >= l && mx <= r) {
            if(s == '+') mx++;
            else mx--;
        }
        cout << mx << " ";
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

