#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) cout << '(';
        for(int j = 1; j <= i; j++) cout << ')';
        for(int j = 1; j <= n - i; j++) cout << '(' << ')';
        cout << '\n';
    }
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

