#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> f(26, 0);
    for(char c : s) f[c - 'a']++;
    for(int i = 0; i < 26; i++) {
        if(f[i] > 1) {
            vector<int> pos;
            for(int j = 0; j < n; j++) {
                if(s[j] == i + 'a') {
                    pos.push_back(j);
                }
            }
            for(size_t j = 1; j < pos.size(); j++) {
                if((pos[j] - pos[j - 1]) % 2 == 1) {
                    cout << "No\n";
                    return;
                }
            }
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

