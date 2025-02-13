#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> ar(3);
    for(int &i : ar) cin >> i;
    sort(ar.begin(), ar.end());
    int a = ar[0], b = ar[1], c = ar[2];
    if(b % a != 0 || c % a != 0) {
        cout << "No\n";
        return;
    }
    if(b / a - 1 + c / a - 1 <= 3) {
        cout << "Yes\n";
        return;
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

