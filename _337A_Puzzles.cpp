#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n, m; cin >> n >> m;
     vector<int> a(m);
     for(int i = 0; i < m; i++){
          cin >> a[i];
     }
     sort(begin(a), end(a));
     int ans = INT_MAX;
     for(int i = 0; i < m - n + 1; i++){
          ans = min(ans, abs(a[i] - a[i + n - 1]));
     }
     cout << ans << endl;
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
     return 0;
}