#include <bits/stdc++.h>
using namespace std;

void solve(){
     map<string, int> users;
     int n; cin >> n;
     for(int i = 0; i < n; i++){
          string username; cin >> username;
          // if(users.find(username) == users.end()) users[username]++;
          if(users.count(username) == 0) { 
               users[username]++;
               cout << "OK" <<endl;
          }
          else if(users.count(username) > 0) {
               users[username]++;
               username += to_string(users[username] - 1);
               cout << username << endl;
          }
     }
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
     return 0;
}