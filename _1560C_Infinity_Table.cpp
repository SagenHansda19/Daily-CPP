#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int x = (ll)ceil(sqrt(n));
    int t = n - (x - 1) * (x - 1);
    if(t <= x) {
        cout << t << " " << x << '\n';
    } else {
        cout << x << " " << x - (t - x) << '\n';   
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

