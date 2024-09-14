#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     string s;
     cin>>s;
     string ans;
     for(int i = 0; i < s.length(); i++){
          if(s[i] == 'a' || s[i] == 'A' || s[i] == 'o' || s[i] == 'O' || s[i] == 'Y' || s[i] == 'y' || s[i] == 'u' || s[i] == 'U' || s[i] == 'i' || s[i] == 'I' || s[i] == 'e' || s[i] == 'E'){
               continue;
          }
          ans += '.';
          ans += (char)tolower(s[i]);
     }
     cout<<ans<<endl;
}
