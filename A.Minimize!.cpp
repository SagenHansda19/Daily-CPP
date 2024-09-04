#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     int a,b,c,t;
     cin>>t;
     while(t-->0){
          cin>>a>>b;
          int val = b - a;
          int temp;
          for(int i = a; i <=b; i++){
               temp = (i - a) + (b - i);
               val = max(val, temp);
          }
          cout<<val<<endl;
     }
     return 0;
}