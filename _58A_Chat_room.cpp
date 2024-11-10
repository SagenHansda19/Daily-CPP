#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define all(s) s.begin(), s.end()

void solve() {
     string s, hello = "hello";
     cin>>s;
     int j = 0;
     for(int i = 0; i < s.length(); i++){
          if(s[i] == hello[j]) j++;
          if(j == 5) {
               cout<<"YES\n";
               return;
          }
     }
     cout<<"NO\n";
}

int main(){
     solve();
     return 0;
}