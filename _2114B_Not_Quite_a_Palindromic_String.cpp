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
    int n, k;
    cin >> n >> k;
    string s; cin >> s;
    int zz = count(s.begin(), s.end(), '1');
    int oo = count(s.begin(), s.end(), '0');
    int mx = floor(zz / 2) + floor(oo / 2), mn = abs(zz - oo) / 2;
    // cout << "mx: " << mx << " mn: " << mn << '\n';
    if(k > mx || k < mn || k % 2 != mx % 2) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

