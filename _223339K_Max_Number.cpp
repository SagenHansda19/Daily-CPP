#include <bits/stdc++.h>
using namespace std;

int ret(vector<int>& a, int id, int n, int m) {
    if(id == n) return m;
    m = max(m, a[id]);
    return ret(a, ++id, n, m);
}

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    cout << ret(a, 0, n, INT_MIN);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

