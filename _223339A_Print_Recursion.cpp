#include <bits/stdc++.h>
using namespace std;

void ret(int x, int n) {
    if(x == n) return;
    cout << "I love Recursion" << '\n';
    return ret(x + 1, n);
}

void solve() {
    int n; cin >> n;
    ret(0, n);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();    
    return 0;
}

