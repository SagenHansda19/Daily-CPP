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
    string s;
    cin >> s;
    if(s.size() == 2) {
        cout << "No\n";
        return;
    }
    stack<int> stk;
    int n = s.size(), ans = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '(') stk.push(i);
        else {
            if(!stk.empty()) {
                stk.pop();
                if(stk.empty()) ans++;
            }
        }
    }
    if(ans == 1) {
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

