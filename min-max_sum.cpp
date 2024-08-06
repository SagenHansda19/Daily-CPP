#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a[5];
     for (int i=0; i<5; i++)
     {
          cin>>a[i];
     }
     sort(a,a+5);
     unsigned int mins = 0;
     unsigned int maxs = 0;
     for (int i=0; i<4; i++)
     {
          mins += a[i];
     }
     for (int i=1; i<5; i++)
     {
          maxs += a[i];
     }
     cout<<mins<<" "<<maxs;
}
