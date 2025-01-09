#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    string s;
    cin >> n >> s;
    int ans = 0;
    for(int i = 0; i < n - 2; i++) {
        if(s[i] == 'p') {
            if(s[i + 1] == 'i') {
                if(s[i + 2] == 'e') {
                    ans++;
                    i = i + 2;
                }
            }
        }
        else if(s[i] == 'm') {
            if(s[i + 1] == 'a') {
                if(s[i + 2] == 'p') {
                    ans++;
                    i = i + 2;
                }
            }
        }
    }
    cout << max(0, ans) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

