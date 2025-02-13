#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    if(n % 2 == 0) {
        cout << "2\n" << 1 << " " << n << '\n' << 1 << " " << n << '\n';
    }
    else {
        cout << "4\n" << 1 << " " << n << '\n' << 2 << " " << n << '\n' << 1 << " " << 2 << '\n' << 1 << " " << 2 << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

