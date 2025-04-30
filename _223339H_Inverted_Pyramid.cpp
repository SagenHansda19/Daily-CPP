#include <bits/stdc++.h>
using namespace std;

void ret(int x, int n) {
    if(x < 0) return;
    for(int i = 1; i < n - x; i++) {
        cout << " ";
    }
    for(int i = 1; i <= 2 * x + 1; i++) {
        cout << "*";
    } 
    cout << '\n';
    ret(--x, n);
}

void solve() {
    int n; cin >> n;
    ret(n - 1, n);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

