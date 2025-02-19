#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    long long s = 0;
    for(int &i : a) cin >> i, s += i;
    int c = count(a.begin(), a.end(), 1);
    cout << (n > 1 && c + 2 * n - s <= n ? "Yes\n" : "No\n");
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

