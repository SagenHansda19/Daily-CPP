#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int x = 0, y = 0;
    for(char c : s) {
        if(c == 'L') x -= 1;
        else if(c == 'R') x += 1;
        else if(c == 'U') y += 1;
        else y -= 1;
        if(x == 1 && y == 1) {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

