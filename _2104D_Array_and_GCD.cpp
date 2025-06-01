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
const int N = 6e6;
vector<int> p, ip(N, 1);

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    sort(a.rbegin(), a.rend());
    int ans = 0;
    ll suma = 0, sump = 0;
    for (int i = 0; i < n; i++) {
        suma += a[i];
        sump += p[i];
        if (suma >= sump) ans = i + 1;
    }
    cout << n - ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 2; i < N; i++) {
        if (!ip[i]) continue;
        p.push_back(i);
        for (int j = i; j < N; j += i) {
            ip[j] = 0;
        }
    }
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
