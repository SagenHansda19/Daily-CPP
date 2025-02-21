#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    vector<int> b(2, 0);
    for(int i : a) {
        if(i == 1) b[0]++;
        else b[1]++;
    }
    if(b[0] >= b[1] && b[1] % 2 == 0) {
        cout << "0\n";
        return;
    }
    cout << max(abs(b[0] - b[1]), 1) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

