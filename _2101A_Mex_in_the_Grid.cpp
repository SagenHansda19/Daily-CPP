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
    vector<vector<int>> a(n, vector<int>(n));
    int x = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            a[j][i] = x;
            x++;
        }
        for(int j = 0; j < i; j++) {
            a[i][j] = x;
            x++;
        }
    }
    vector<int> p;
    for(int i = n - 1; i >= 0; i--) {
        if(i % 2 == 0) p.push_back(i);
    }
    for(int i = 0; i < n; i++) {
        if(i % 2 == 1) p.push_back(i);
    }
    vector<vector<int>> b;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[p[i]][p[j]] << " \n"[j == n - 1];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

