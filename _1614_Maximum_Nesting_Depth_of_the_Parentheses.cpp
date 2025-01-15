#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     int maxDepth(string s) {
          int ans = 0;
          int maxm = 0;
          for(int i = 0; i < s.length(); i++){
               if(s[i] == '('){
                    ans++;
               }
               if(s[i] == ')'){
                    ans--;
               }
               maxm = max(maxm, ans);
          }
          return maxm;
     }
};

int main(){
     Solution sol;
     string s;
     cin>>s;
     cout<<sol.maxDepth(s);
     return 0;   
}