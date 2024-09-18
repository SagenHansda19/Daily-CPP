#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     string toLowerCase(string s) {
          for(int i = 0; i < s.length(); i++){
               s[i] = (char)tolower(s[i]);
          }
          return s;
     }
};

int main(){
     Solution sol;
     string s;
     cin >> s;
     cout << sol.toLowerCase(s);
     return 0;   
}