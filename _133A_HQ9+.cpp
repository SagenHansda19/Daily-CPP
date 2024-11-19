#include <bits/stdc++.h>
using namespace std;

void solve(){
     string s;
     cin >> s;
     for(int i = 0; i < s.length(); i++){
          if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
               cout << "YES" <<endl;
               return;
          }
     }
     cout << "NO" <<endl;
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
     return 0;
}