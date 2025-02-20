#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int mm = INT_MAX;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mm = min(mm, abs(a[i]));
    }
    cout << mm << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

