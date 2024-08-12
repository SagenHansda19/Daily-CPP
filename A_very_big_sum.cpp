#include<iostream>
using namespace std;
int main()
{
     int arr[10] = {};
     int length;
     cin>>length;
     for (int i = 0; i<length; i++)
     {
          cin>>arr[i];
     }
     long sum = 0;
     for (int i = 0; i<length ; i++)
     {
          sum+=arr[i];
     }
     cout
     return 0;
}