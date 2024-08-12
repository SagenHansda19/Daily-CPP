#include<iostream>
using namespace std;
int main()
{
     int a[10];
     int n, x;
     cin>>n>>x;
     bool flag = false;
     for (int i=0; i<n; i++)
     {
          cin>>a[i];
     }
     // cout<<x;
     for (int i=0; i<n; i++)
     {
          if (a[i] == x)
          {
               flag = true;
          }
     }
     if(flag)
     {
          cout<<"YES";
     }
     else
     {
          cout<<"NO";
     }
     return 0;
}