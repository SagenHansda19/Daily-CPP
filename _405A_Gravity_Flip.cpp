#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n; cin >> n;
     vector<int> a(n);
     for(int i = 0; i < n; i++){
          cin >> a[i];
     }
     sort(begin(a), end(a));
     for(auto i : a) cout << i << " " ;
     cout << endl;
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
     return 0;
}