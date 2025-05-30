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
    vector<int> a(n), l(n), r(n);
    for(int &i : a) cin >> i;
    vector<int> stk;
    int cur = 0;
    for(int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
        if(a[i] == -1) {
            a[i] = 0;
            stk.push_back(i);
        }
        cur += a[i];
        while (!stk.empty() && cur < l[i]) {
            cur++;
            a[stk.back()] = 1;
            stk.pop_back();
        }
    }
    cur = 0;
    for(int i = 0; i < n; i++) {
        cur += a[i];
        if(cur < l[i] || cur > r[i]) {
            cout << "-1\n";
            return;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " \n"[i == n - 1];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

