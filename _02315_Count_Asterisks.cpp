#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     int countAsterisks(string s) {
          int ans = 0;
          for(int i = 0; i < s.length(); i++){
               if(s[i] == '|'){
                    i++;
                    while(s[i] != '|'){
                         i++;
                    }
               }
               else{
                    if(s[i] == '*'){
                         ans++;
                    }
               }
          }
          return ans;
     }
};

int main(){
     Solution sol;
     string s;
     cin>>s;
     cout<<sol.countAsterisks(s);
     return 0;
     
}