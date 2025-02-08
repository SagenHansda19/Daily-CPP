#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, h, m;
    cin >> n >> h >> m;
    int time = 60 * h + m;
    int ans = 24 * 60;
    for(int i = 0; i < n; i++) {
        cin >>  h >> m;
        int t = 60 * h + m - time;
        if(t < 0) t += 24 * 60;
        ans = min(ans, t);
    }
    cout << ans / 60 << " " << ans % 60 << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

