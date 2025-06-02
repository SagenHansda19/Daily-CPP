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
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    int v = 0;
    for (int i = 2; i < n - 1; i++) {
        if (v && a[i] == a[i + 1]) {
            cout << "Yes\n";
            return;
        }
        if (a[i] - a[i - 1] > 1) {
            v = 0;
        }
        if (a[i] == a[i - 1]) {
            v = 1;
        }
    }
    cout << "No\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
