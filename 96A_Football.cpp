#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     string s;
     cin>>s;
     int count = 1;
     int cmp = s[0];
     for(int i = 1; i < s.length(); i++){
          if(s[i] == cmp) count++;
          else {
               cmp = s[i];
               count = 1;
          }
          if(count == 7){
               break;
          }
     }
     if(count >= 7) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
     return 0;
}