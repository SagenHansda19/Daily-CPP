#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     int n;
     cin>>n;
     int val;
     int ans = 0;
     for(int i = 0; i < n; i++){
          int sum = 0;
          for(int j = 0; j < 3; j++){
               cin>>val;
               sum += val;
          }
          if(sum >= 2) ans += 1;
     }
     cout<<ans<<endl;
}