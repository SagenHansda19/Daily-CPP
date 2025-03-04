#include <bits/stdc++.h>
using namespace std;

void solve1() {
    string s; cin >> s;
    int n = s.length();
    int a = s.find('a');
    if(a == string::npos) {
        cout << "No\n";
        return;
    }
    int r = a;
    bool is = true;
    for(int i = 1; i < n; i++) {
        int pos = s.find(char('a' + i));
        if(pos == string::npos || (pos != a - 1 && pos != r + 1)) {
            is = false;
            break;
        } else {
            a = min(a, pos);
            r = max(r, pos);
        }
    }
    cout << (is ? "Yes\n" : "No\n");
}

void solve2() {
    string s; cin >> s;
    int n = s.length();
    int a = s.find('a');
    if(a == string::npos) {
        cout << "No\n";
        return;
    }
    int l = a, r = a;
    char next = 'b';
    while(l > 0 || r < n - 1) {
        if(l > 0 && s[l - 1] == next) {
            l--;
        } else if(r < n - 1 && s[r + 1] == next) {
            r++;
        } else {
            cout << "No\n";
            return;
        }
        next++;
    }
    cout << "Yes\n";
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve2();
    return 0;
}

