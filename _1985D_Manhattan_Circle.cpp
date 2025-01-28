#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int mh = 0, rr = 0;
    vector<vector<char>> grid(n, vector<char>(m, '.'));
    for(int i = 0; i < n; i++) {
        int mm = 0;
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if(grid[i][j] == '#') mm++;
        }
        if(mm > mh) {
            mh = mm;
            rr = i;
        }
    }
    int l = 0;
    for(int i = 0; i < m; i++) {
        if(grid[rr][i] == '#') {
            l = i;
            break;
        }
    }
    int r = l + mh - 1;
    int mid = l + (r - l) / 2;
    cout << rr + 1 << " " << mid + 1 << '\n';
    //cout << mh << " " << rr << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

