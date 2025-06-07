#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());
    int ans = n;
    for(int i = 0, j = 0; i < n - 1; i++) {
        while(j + 1 < n && a[i] + a[i + 1] > a[j + 1]) j++;
        ans = min(ans, i + n - 1 - j);
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

