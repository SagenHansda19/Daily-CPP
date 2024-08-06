#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     int a[100];
     double n, pos = 0, neg = 0, zero = 0;
     cin>>n;
     for(int i=0; i<n; i++)
     {
          cin>>a[i];
     }
     for(int i=0; i<n; i++)
     {
          if(a[i]==0)
          {
               zero++;
          }
          else if (a[i]<0)
          {
               neg++;
          }
          else if(a[i]>0)
          {
               pos++;
          }

     }
     double posr = pos / n;
     double negr = neg / n;
     double zeror = zero / n;
     cout<<setprecision(6)<<fixed;
     cout<<posr<<endl;
     cout<<negr<<endl;
     cout<<zeror<<endl;
     return 0;
}