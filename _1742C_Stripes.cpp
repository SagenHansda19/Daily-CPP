#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<vector<char>> grid(8, vector<char>(8));
    vector<int> r;
    for(int i = 0; i < 8 ; i++) {
        for(int j = 0; j < 8; j++) {
            cin >> grid[i][j];
            if(grid[i][j] == 'R') r.push_back(i);
        }
    }
    for(int i : r) {
        bool is = true;
        for(int j = 0; j < 8; j++) {
            if(grid[i][j] != 'R') {
                is = false;
                break;
            }
        }
        if(is) {
            cout << "R\n";
            return;
        }
    }
    cout << "B\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

