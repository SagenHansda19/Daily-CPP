#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll ret(ll n) {
    if(n <= 1) return 1;
    return n * ret(n - 1);
}

void solve() {
    ll n; cin >> n;
    cout << ret(n);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

