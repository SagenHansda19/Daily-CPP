#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = n / 2 - 1; i >= 1; i--) {
        if(a[i] == a[i + 1] || a[n - i + 1] == a[n - i]) {
            swap(a[i], a[n - i + 1]);
        }
    }
    int ans = 0;
    for(int i = 1; i < n; i++) {
        ans += (a[i] == a[i + 1]);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

