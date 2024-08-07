#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
          int n;
          cin>>n;
          int d[n];
          for(int i=0;i<n;i++){
               cin>>d[i];
          }
          bool flag = true;
          for(int i=0; i<n; i++)
          {    
               if(d[i]<=d[i+1])
               {
                    continue;
               }
               else if(d[i]>d[i+1])
               {
                    // cout<<"NO"<<endl;
                    flag = false;
                    break;
               }
          }  
          if(flag)
          {
               cout<<"YES"<<endl;
          }
          else
          {
               cout<<"NO"<<endl;
          }
     }
     return 0;
}