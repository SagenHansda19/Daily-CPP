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

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n), vc(n, -1);
    for (int &i : a) cin >> i, --i;
    for (int &i : b) cin >> i, --i;
    int cnt = 0, s = 0;
    for (int i = 0; i < n; i++) {
        if (vc[a[i]] == -1) {
            if (a[i] == b[i]) {
                c[i] = n / 2;
                ++cnt;
            } else {
                vc[a[i]] = c[i] = s++;
                vc[b[i]] = a[i];
            }
        } else {
            if (vc[a[i]] != b[i]) {
                cout << "-1\n";
                return;
            }
            c[i] = n - 1 - vc[b[i]];
        }
    }
    if (cnt != n % 2) {
        cout << "-1\n";
        return;
    }
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++) {
        while (c[i] != i) {
            ans.emplace_back(i, c[i]);
            swap(c[i], c[c[i]]);
        }
    }
    cout << ans.size() << '\n';
    for (auto i : ans) {
        cout << i.first + 1 << " " << i.second + 1 << '\n';
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
