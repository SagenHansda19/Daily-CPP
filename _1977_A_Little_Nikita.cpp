#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> stk;
    while(n > 0) {
        if(stk.size() < m) stk.push_back(1);
        else stk.pop_back();
        n--;
    }
    cout << (stk.size() == m ? "Yes\n" : "No\n");
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

