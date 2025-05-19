#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> l(n), r(n);
    for (int &i : l) cin >> i;
    for (int &i : r) cin >> i;
    int m = k - 1;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        a[i] = max(l[i], r[i]);
        b[i] = min(l[i], r[i]);
    }
    sort(b.rbegin(), b.rend());
    ll ans = accumulate(a.begin(), a.end(), 0LL);
    for (int i = 0; i < m; i++) ans += b[i];
    cout << ans + 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
