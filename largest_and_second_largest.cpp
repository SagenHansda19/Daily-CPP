#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
          int n;
          cin>>n;
          int a[n];
          for(int i=0;i<n;i++){
               cin>>a[i];
          }
          int largest = 0;
          for (int i=0; i<n; i++)
          {
               if(a[i]>largest)
               {
                    largest = a[i];
               }
          }
          int next = 0;
          for (int i=0; i<n; i++)
          {
               if((a[i]>next)&&(a[i]<largest))
               {
                    next = a[i];
               }
          }
          int sum = largest + next;
          cout<<sum<<endl;
     }
     return 0;
}