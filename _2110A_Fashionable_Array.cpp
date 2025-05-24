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
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());
    int mn = a[0], mx = a[n - 1];
    if((mn + mx) % 2 == 0) {
        cout << "0\n";
        return;
    }
    int ans1 = 0;
    for(int i = 0; i < n; i++) {
        if((a[i] + mx) % 2 == 0) break;
        else ans1++;
    }
    int ans2 = 0;
    for(int i = n - 1; i >= 0; i--) {
        if((a[i] + mn) % 2 == 0) break;
        else ans2++;
    }
    cout << min(ans1, ans2) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

