#include <bits/stdc++.h>
using namespace std;

void solve(){
     int a, b, c;
     cin >> a >> b >> c;
     int ans = 0;
     ans = max(ans, a + b + c);
     ans = max(ans, a * b * c);
     ans = max(ans, (a + b) * c);
     ans = max(ans, a * (b + c));
     ans = max(ans, a + b * c);
     ans = max(ans, a * b + c);
     cout << ans << endl;
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
     return 0;
}