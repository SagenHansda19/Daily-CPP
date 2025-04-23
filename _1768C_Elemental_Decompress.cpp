#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        --a[i];
    }
    vector<int> f(n);
    vector<vector<int>> at(n);
    for(int i = 0; i < n; i++) {
        f[a[i]] += 1;
        at[a[i]].push_back(i);
    }
    vector<int> twos;
    vector<int> zeros;
    bool ok = true;
    for(int i = 0; i < n; i++) {
        if(f[i] == 0) zeros.push_back(i);
        if(f[i] == 2) twos.push_back(i);
        if(f[i] > 2) {
            ok = false;
            break;
        }
    }
    if(!ok) {
        cout << "No\n";
        return;
    }
    auto p = a;
    auto q = a;
    int k = (int) twos.size();
    for(int i = 0; i < k; i++) {
        if(twos[i] < zeros[i]) {
            ok = false;
            break;
        }
        int v = twos[i];
        p[at[v][0]] = zeros[i];
        q[at[v][1]] = zeros[i];
    } 
    if(ok) {
        cout << "Yes\n";
        for(int i = 0; i < n; i++) {
            cout << p[i] + 1 << " \n"[i == n - 1];
        }
        for(int i = 0; i < n; i++) {
            cout << q[i] + 1 << " \n"[i == n - 1];
        }
    } else {
        cout << "No\n";
        return;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

