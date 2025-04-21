#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    if(n % 2 == 0) {
        cout << "No\n";
        return;
    }
    vector<int> a(2 * n);
    iota(a.begin(), a.end(), 1);
    cout << "Yes\n";
    for (int i = 1; i <= (n + 1) / 2; i++) {
        cout << i << " " << 2 * n - 2 * i + 2 << "\n";
    }
    for (int i = n; i > (n + 1) / 2; i--) {
        cout << i << " " << 3 * n - 2 * i + 2 << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

