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
    vector<int> a(n);
    for (int &i : a) cin >> i, i--;
    set<int> b;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        x--;
        while (!b.count(x)) {
            b.insert(x);
            x = a[x];
        }
        cout << b.size() << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
