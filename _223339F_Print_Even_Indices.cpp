#include <bits/stdc++.h>
using namespace std;

void ret(vector<int>& a, int id) {
    if(id < 0) return;
    if(id % 2 == 0) cout << a[id] << " ";
    ret(a, --id);
}

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    ret(a, n - 1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

