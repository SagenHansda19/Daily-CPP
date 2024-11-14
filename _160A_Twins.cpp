#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n;
     cin>>n;
     vector<int> a(n);
     for(int i = 0; i < n; i++){
          cin>>a[i];
     }
     sort(a.begin(), a.end());
     int tot = accumulate(a.begin(), a.end(), 0);
     int cap = (int)(tot / 2);
     int temp = 0, coin = 0;
     for(int i = n - 1; i >= 0; i--){
          temp += a[i];
          coin++;
          if(temp > cap){
               cout<<coin<<endl;
               return;
          } 
     }
}

int main(){
     solve();
}