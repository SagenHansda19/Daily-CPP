#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int pip = 0;
    for(int i = 0; i < n; i++) {
        char c; int p;
        cin >> c >> p;
        if(c == 'P') pip += p;
        else {
            if(p >= pip + 1) {
                pip = max(pip - p, 0);
                cout << "YES\n";
            }
            else {
                pip -= p;
                cout << "NO\n";
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

