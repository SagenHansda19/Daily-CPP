#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(){
     int k, n, w;
     cin>>k>>n>>w;
     int cost = k * (w * (w + 1)/ 2);
     if(cost <= n) cout<<0<<endl;
     else cout<< cost - n <<endl;
     return;
}

int main(){
     solve();
     return 0;
}