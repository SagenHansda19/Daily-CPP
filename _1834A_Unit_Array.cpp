#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int x = 0, y = 0;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        if(a == 1) x++;
        else y++;
    }
    int ans = 0;
    while(!(x - y >= 0 && y % 2 == 0)) y--, x++, ans++;
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

