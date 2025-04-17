#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    ll sum = 0;
    for(int &i : a) {
        cin >> i;
        sum += i;
    }
    if(sum) {
        cout << "No\n";
        return;
    }
    ll mm = 0;
    int x = 0;
    for(int i = 0; i < n; i++) {
        mm += a[i];
        if(mm < 0) {
            cout << "No\n";
            return;
        }
        if(!mm) {
            x = i + 1;
            break;
        }
    }
    if(x == a.back()) {
        cout << "No\n";
        return;
    }
    for(int i = x; i < n; i++) {
        if(a[i]) {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

