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
    ll ans = 0, cnt = 0;
    for (int &i : a) {
        cin >> i;
        ans += i;
        cnt += (i & 1);
    }
    if (!cnt || cnt == n) {
        cout << *max_element(a.begin(), a.end()) << '\n';
    } else {
        cout << ans - cnt + 1 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
