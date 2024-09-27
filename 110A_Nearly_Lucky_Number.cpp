#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#define ll long long
using namespace std;
int main(){
     ll n;
     cin>>n;
     int count = 0;
     while(n > 0){
          int temp = n % 10;
          n /= 10;
          if(temp == 4 || temp == 7){
               count++;
          } 
     }
     if(count == 4 || count == 7) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
     return 0;
}