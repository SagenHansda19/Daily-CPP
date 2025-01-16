#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    if(s[1] == '=') {
        if(s[0] - '0' == s[2] - '0') {
            cout << s << '\n';
            return;
        }
        else if(s[0] - '0' < s[2] - '0') {
            s[1] = '<';
        }
        else {
            s[1] = '>';
        }
    }
    else if(s[1] == '<') {
        if(s[0] - '0' < s[2] - '0') {
            cout << s << '\n';
            return;
        }
        else if(s[0] - '0' == s[2] - '0') {
            s[1] = '=';
        }
        else {
            s[1] = '>';
        }
    }
    else {
        if(s[0] - '0' > s[2] - '0') {
            cout << s << '\n';
            return;
        }
        else if(s[0] - '0' == s[2] - '0') {
            s[1] = '=';
        }
        else {
            s[1] = '<';
        }
    }

    cout << s << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

