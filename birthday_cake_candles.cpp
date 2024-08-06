#include<iostream>
using namespace std;
int main()
{
     int a[1000000],n;
     cin>>n;
     for (int i=0; i<n; i++)
     {
          cin>>a[i];
     }
     int max = a[0];
     int t = 0;
     for (int i=1; i<n; i++)
     {
          if(a[i] > max)
          {
               max = a[i];
          }
     }
     for(int i=0; i<n; i++)
     {
          if(a[i] == max)
          {
               t++;
          }
     }
     cout<<t<<endl;
     return 0;
}