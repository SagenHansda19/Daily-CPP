#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a == 0) {
        cout << "1\n";
        return;
    }
    int ans = a;
    ans += 2 * min(b, c);
    ans += min(a + 1, abs(c - b) + d);
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

