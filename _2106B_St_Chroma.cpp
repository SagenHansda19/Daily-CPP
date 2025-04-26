#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    for(int i = 0; i < x; i++) {
        cout << i << " ";
    }
    for(int i = x + 1; i < n; i++) {
        cout << i << " ";
    }
    if(x < n) {
        cout << x;
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

