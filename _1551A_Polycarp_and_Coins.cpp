#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int x = n / 3;
    if(n % 3 == 0) {
        cout << x << " " << x << '\n';
    } else if(n % 3 == 1) {
        cout << x + 1 << " " << x << '\n';
    } else {
        cout << x << " " << x + 1 << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

