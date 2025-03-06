#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    int dif = abs(a - b);
    int ans = 0, i = 10;
    while(dif > 0 && i > 0) {
        if(dif / i > 0) {
            ans += dif / i;
            dif %= i;
        }
        i--;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

