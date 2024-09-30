#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int min_opr(int n, int k){
     if(k == 1) return n;
     int ans = 0;
     while(n) {
          ans += n % k;
          n /= k;
     }
     return ans;
}

int main(){
     int t;
     cin>>t;
     while(t--){
          int n, k;
          cin>>n>>k;
          cout<<min_opr(n, k)<<endl;
     }    
     return 0;
}