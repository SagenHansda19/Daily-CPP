#include <bits/stdc++.h>
using namespace std;

void ret(int n) {
    if(n <= 0) return;
    ret(n / 10);
    cout << n % 10 << " ";
}

void solve() {
    int n; cin >> n;
    if(n == 0) cout << 0;
    else ret(n);
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

