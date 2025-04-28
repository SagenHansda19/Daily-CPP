#include <bits/stdc++.h>
using namespace std;

void ret(int n) {
    if(n == 1) {
        cout << 1;
        return;
    }
    cout << n << " ";
    return ret(--n);
}

void solve() {
    int n; cin >> n;
    ret(n);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

