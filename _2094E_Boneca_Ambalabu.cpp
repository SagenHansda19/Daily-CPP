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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    vector<int> bb(30);
    for (int x : a) {
        for (int i = 0; i < 30; i++) {
            if (x >> i & 1) bb[i]++;
        }
    }
    ll ans = 0;
    for (int x : a) {
        ll sum = 0;
        for (int i = 0; i < 30; i++) {
            if (x >> i & 1)
                sum += (ll)(n - bb[i]) << i;
            else
                sum += (ll)(bb[i]) << i;
        }
        ans = max(ans, sum);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
