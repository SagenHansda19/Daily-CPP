#include<iostream>
using namespace std;
int main()
{
     int a[60], n;
     cin>>n;
     for (int i=0; i<n; i++)
     {
          cin>>a[i];
     }
     int nm5;
     for (int i=0; i<n; i++)
     {
          nm5 = (a[i]/5+1)*5;
          if(a[i]<38)
          {
               a[i]+=0;
          }
          else if((nm5 - a[i]) < 3)
          {
               a[i] = nm5;
          }
          else
          {
               a[i]+=0;
          }
     }
     for (int i=0; i<n; i++)
     {
          cout<<a[i]<<endl;
     }
}