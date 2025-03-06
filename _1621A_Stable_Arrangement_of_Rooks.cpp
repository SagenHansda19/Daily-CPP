#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    if(2 * b - 1 > a) {
        cout << "-1\n";
        return;
    }
    int m = 1, c = 0;
    for(int i = 1; i <= a; i++) {
        for(int j = 1; j <= a; j++) {
            if(i == j && i == m && c < b) {
                cout << 'R';
                m += 2;
                c++;
            } else {
                cout << '.';
            }
        }
        cout << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

