#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     int n, k;
     cin>>n>>k;
     for(int i = 0; i < k; i++){
          if(n % 10 == 0){
               n = n / 10;
          }
          else{
               n -= 1;
          }
     }    
     cout<<n<<endl;
     return 0;
}