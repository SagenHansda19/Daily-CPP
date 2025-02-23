#include <bits/stdc++.h>
using namespace std;

bool is(int a) {
    string s = to_string(a);
    int n = s.length();
    int z = count(s.begin(), s.end(), '0');
    return n - z == 1;
}

vector<int> wow;
void round(int n) {
    for(int i = 1; i <= n; i++) {
        if(is(i)) wow.push_back(i);
    }
}   

void solve() {
    int n; cin >> n;
    int ans = 0;
    for(int i : wow) {
        if(i <= n) ans++;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    round(1000000);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

