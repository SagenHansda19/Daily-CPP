#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     long long t;
     while(t-->0){
          long long n,k;
          cin>>n>>k;
          vector<int> arr;
          for(int i = 0; i < n; i++){
               int valu = k+i-1;
               arr.push_back(valu);
          }
          for(auto valo : arr){
               cout<<valo<<" ";
          }
          cout<<endl;
          long long x = 0;
          long long sum = 0;
          long long sub = 0;
          for(long long i = 1; i <= n; i++){
               for(long long j = 1; j <= i; j++){
                    sum += arr[j-1];
               }
               for(long long j = i; j <= n; j++){
                    sub += arr[j-1];
               }
               long long temp = abs(sum - sub);
               x = min(x, temp);
          }
          // cout<<x<<endl;
     }    
}