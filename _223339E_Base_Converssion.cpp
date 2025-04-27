#include <bits/stdc++.h>
using namespace std;

void ret(int n) {
    if(n == 0) return;
    ret(n / 2);
    cout << (n % 2);
}

void solve() {
    int n; cin >> n;
    ret(n);
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

