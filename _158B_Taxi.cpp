#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n; cin >> n;
     vector<int> a(n);
     map<int, int> f;
     for(int i = 0; i < n; i++){ 
          cin >> a[i];
          f[a[i]]++;
     }
     int ans = 0;
     
     ans += f[4];

     ans += f[3];
     f[1] -= min(f[3], f[1]);

     ans += f[2] / 2;
     if(f[2] % 2 != 0){
          ans++;
          f[1] -= min(f[1], 2);
     }

     if(f[1] > 0){
          ans += (f[1] + 3) / 4;
     }

     cout << ans << endl;
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
     return 0;
}