#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     int val, x = 0, y = 0;
     for(int i = 0; i < 5; i++){
          for(int j = 0; j < 5; j++){
               cin>>val;
               if(val == 1){
                    x = i + 1;
                    y = j + 1;
                    break;
               }
          }
     }    
     int ans = 0;
     while(x != 3){
          if(x < 3){
               x++;
               ans++;
          }
          else if(x > 3){
               x--;
               ans++;
          }
     }
     while(y != 3){
          if(y < 3){
               y++;
               ans++;
          }
          else if(y > 3){
               y--;
               ans++;
          }
     }
     cout<<ans<<endl;
     return 0;     
}