#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     string s;
     cin>>s;
     int up= 0, lo = 0;
     for(char c : s){
          if(isupper(c)) up++;
          else lo++;
     }    
     if(lo >= up){
          for(char c : s){
               c = tolower(c);
               cout<<c;
          }
          cout<<endl;
     }
     else {
          for(char c : s){
               c = toupper(c);
               cout<<c;
          }
          cout<<endl;
     }
}