#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(){
     int n;
     cin>>n;
     if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n % 477 == 0){
          cout<<"YES"<<endl;
          return;
     }
     cout<<"NO"<<endl;

}

int main(){
     solve();
}