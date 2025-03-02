#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int dif = abs(a - b);
    int sz = 2 * dif;
    if(a > sz || b > sz || c > sz) {
        cout << "-1\n";
        return;
    }
    cout << (c + dif > sz ? (c + dif) % sz : c + dif) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

