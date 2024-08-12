#include<iostream>
using namespace std;
int main()
{
     int a[10] = {};
     int b[10] = {};
     for(int i = 0; i<3; i++){
          cin>>a[i];
     }
     for(int i = 0; i<3; i++){
          cin>>b[i];
     }
     // int lenght = sizeof(a)/sizeof(a[0]);
     int as = 0, bs = 0;
     for (int i = 0; i < 3; i++)
     {
          if(a[i] > b[i]){
               as++;
          }
          else if(a[i] < b[i]){
               bs++;
          }
          else if(a[i] == b[i]){
               as+=0;
               bs+=0;
          }
     }
     cout<<as<<" "<<bs;
}