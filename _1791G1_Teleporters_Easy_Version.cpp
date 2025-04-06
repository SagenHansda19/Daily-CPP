#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, c;
    cin >> n >> c;
    priority_queue<int> pq;
    for(int i = 1; i <= n; i++) {
        int x; cin >> x;
        pq.push(-x - i);
    }
    int ans = 0;
    while(!pq.empty()) {
        int x = -pq.top(); pq.pop();
        if(x > c) break;
        ans++;
        c -= x;
    }
    cout << ans << '\n';
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

