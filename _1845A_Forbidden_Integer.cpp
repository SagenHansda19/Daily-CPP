#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a;
    if(x != 1) {
        a = vector<int>(n, 1);
    } else {
        if(n == 1) {
            cout << "No\n";
            return;
        } else if(k == 1 || n == 1) {
            cout << "No\n";
            return;
        } else if(k == 2) {
            if(n % 2 == 0) {
                a = vector<int>(n / 2, 2);
            } else {
                cout << "No\n";
                return;
            }
        } else {
            if(n % 2 == 0) {
                a = vector<int>(n / 2, 2);
            } else {
                a = vector<int>((n - 3) / 2, 2);
                a.push_back(3);
            }
        }
    }
    cout << "Yes\n" << a.size() << '\n';
    for(int i : a) cout << i << " ";
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

