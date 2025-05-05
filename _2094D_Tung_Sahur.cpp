#include <bits/stdc++.h>
using namespace std;

void solve() {
    string p, s;
    cin >> p >> s;
    if(p[0] != s[0]) {
        cout << "No\n";
        return;
    }
    if(p.back() != s.back()) {
        cout << "No\n";
        return;
    } 
    vector<int> a;
    for(int i = 0; i < p.size(); i++) {
        if(a.empty() || p[i] != p[i - 1]) a.push_back(1);
        else a.back()++;
    }
    vector<int> b;
    for(int i = 0; i < s.size(); i++) {
        if(b.empty() || s[i] != s[i - 1]) b.push_back(1);
        else b.back()++;
    }
    if(a.size() != b.size()) {
        cout << "No\n";
        return;
    }
    for(int i = 0; i < a.size(); i++) {
        if(2 * a[i] < b[i] || a[i] > b[i]) {
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

