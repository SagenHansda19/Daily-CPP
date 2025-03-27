#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector a(n, std::vector<int>(n - 1));
    vector<int> cnt(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            cin >> a[i][j];
            a[i][j]--;
        }
        cnt[a[i][0]]++;
    }
    int x = max_element(cnt.begin(), cnt.end()) - cnt.begin();
    for (int i = 0; i < n; i++) {
        if (a[i][0] != x) {
            cout << x + 1;
            for (auto y : a[i]) {
                cout << " " << y + 1;
            }
            cout << "\n";
            return;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}

