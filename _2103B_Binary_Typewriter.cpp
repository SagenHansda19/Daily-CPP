#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    s = "0" + s;
    int ans = 0, cur = s[0];
    for (int i = 1; i <= n; i++) {
        int dd = s[i];
        if (cur != dd) ans++;
        cur = dd;
    }
    if (ans >= 3)
        cout << ans - 2 + n << '\n';
    else if (ans == 2)
        cout << ans - 1 + n << '\n';
    else
        cout << ans + n << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
