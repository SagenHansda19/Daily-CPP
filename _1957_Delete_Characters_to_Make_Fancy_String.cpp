#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     string makeFancyString(string s) {
          string ans = "";
          int count = 1;
          for(int i = 0; i < s.length(); i++){
               if(s[i] == s[i + 1]) count++;
               else count = 1;
               if(count > 2) continue;
               ans += s[i];
          }
          return ans;
     }
};

int main(){
     Solution sol;
     string s;
     cin>>s;
     cout<<sol.makeFancyString(s);
     return 0;   
}