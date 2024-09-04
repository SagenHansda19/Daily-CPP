#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t-->0){
          int n;
          cin>>n;
          string val;
          int result[n];
          cin.ignore();
          for(int i = 0; i < n; i++){
               getline(cin, val);
               for(int j = 0; j < val.length(); j++){
                    if(val[j] == '#'){
                         result[n-i-1] = j+1;
                         break;
                    }
               }
          }
          for(int i = 0; i < n; i++){
               cout<<result[i]<<" ";
          }
          cout<<endl;
     }    
     return 0;
}