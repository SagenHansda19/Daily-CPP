#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    array<int, 4> cnt{};
    for(int i = 1; i <= k; i++) {
        int va = binary_search(a.begin(), a.end(), i);
        int vb = binary_search(b.begin(), b.end(), i);
        cnt[va * 2 + vb]++;
    }
    if(cnt[0] == 0 && cnt[1] + cnt[3] >= k / 2 && cnt[2] + cnt[3] >= k / 2) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

