#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     int l, b;
     cin>>l>>b;
     int count = 0;
     // for(int i = 0; i < 10; i++){
     //      l *= 3;
     //      b *= 2;
     //      count++;
     //      if(l > b){
     //           break;
     //      }
     // }
     if(l > b){
          cout<<0<<endl;
     }
     else{
          while(l <= b){
               l *= 3;
               b *= 2;
               count++;
          }
     }
     cout<<count<<endl;
     return 0;
}