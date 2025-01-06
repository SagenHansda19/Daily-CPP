#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;
    if(n == 1) {
        cout << 1 << '\n'  << 1 << '\n';
        return;
    }
    if(k == 1 || k == n) {
        cout << -1 << '\n';
        return;
    }
    int p1 = k - k % 2;
    int p2 = k + 1 + k % 2;
    cout << "3\n1 " << p1 << " " << p2 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

