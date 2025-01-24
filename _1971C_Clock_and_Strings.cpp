#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string s = "";
    for(int i = 1; i <= 12; i++) {
        if(i == a || i == b) s += 'a';
        if(i == c || i == d) s += 'b';
    }
    cout << ((s == "abab" || s == "baba") ? "Yes\n" : "No\n");
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

