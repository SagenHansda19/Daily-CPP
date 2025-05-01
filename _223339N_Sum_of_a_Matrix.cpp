#include <bits/stdc++.h>
using namespace std;

void ret(vector<vector<int>>& a, vector<vector<int>>& b, int i, int j, int r, int c) {
    if(i == r) return;
    if(j == c) {
        cout << '\n';
        ret(a, b, i + 1, 0, r, c);
        return;
    }
    cout << a[i][j] + b[i][j] << " ";
    ret(a, b, i, j + 1, r, c); 
}

void solve() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> a(r, vector<int>(c)), b(r, vector<int>(c));
    for(auto &i : a) {
        for(int &j : i) cin >> j;
    }
    for(auto &i : b) {
        for(int &j : i) cin >> j;
    }
    ret(a, b, 0, 0, r, c);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

