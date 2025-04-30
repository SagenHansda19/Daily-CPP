#include <bits/stdc++.h>
using namespace std;

bool is(char& c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int ret(string s, int id, int n, int cnt) {
    if(id == n) return cnt;
    cnt += is(s[id]);
    return ret(s, ++id, n, cnt);
}

void solve() {
    string s; 
    getline(cin, s);
    int n = s.length();
    cout << ret(s, 0, n, 0);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve(); 
    return 0;
}

