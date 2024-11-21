#include <bits/stdc++.h>
using namespace std;

void solve(){
     string s; cin >> s;
     int i, n = s.length();
     for(i = 1; i < n; i++){
          if(islower(s[i])) break;
     }
     if(i == n){
          for(i = 0;i < n; i++){
               if(isupper(s[i])) s[i] = tolower(s[i]);
               else s[i] = toupper(s[i]);
          }
     }
     cout << s << endl;
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
     return 0;
}