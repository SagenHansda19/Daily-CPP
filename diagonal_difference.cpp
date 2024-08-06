#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
     int lmt;
     cin>>lmt;
     int arr[lmt][lmt];
     long major=0,minor=0;
     for (int i = 1; i<=lmt; i++)
     {
          for (int j=1; j<=lmt; j++)
          {
               cin>>arr[i][j];
          }
     }
     for (int i = 1; i<=lmt; i++)
     {
          for (int j=1; j<=lmt; j++)
          {
               if(i==j)
               {
                    major+=arr[i][j];
               }
          }
     }
     for (int i = 1; i<=lmt; i++)
     {
          for (int j=1; j<=lmt; j++)
          {
               if(i+j==lmt+1)
               {
                    minor+=arr[i][j];
               }
          }
     }
     cout<<abs(major-minor);
     return 0;
}