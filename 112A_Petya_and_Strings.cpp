#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main(){
     string s1, s2;
     cin>>s1>>s2;
     int ans = 0;
     for(int i = 0; i < s1.length(); i++){
          if(int(tolower(s1[i])) < int(tolower(s2[i]))){
               ans = -1;
               break;
          }
          else if(int(tolower(s1[i])) > int(tolower(s2[i]))){
               ans = 1;
               break;
          }
     }
     cout<<ans<<endl;
}
