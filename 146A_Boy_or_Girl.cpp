#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     string name;
     cin>>name;
     sort(name.begin(), name.end());
     int l = name.length();
     int count = 0;
     for(int i = 1; i < l; i++){
          if(name[i] != name[i-1]){
               count++;
          }
     }
     if(count % 2 != 0){
          cout<<"CHAT WITH HER!"<<endl;
     }
     else{
          cout<<"IGNORE HIM!"<<endl;//test 
     }
     return 0;
}