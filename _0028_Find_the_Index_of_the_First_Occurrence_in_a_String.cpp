#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     int strStr(string haystack, string needle) {
          int n = needle.length(), h = haystack.length();
          if(n > h) return -1;
          for(int i = 0; i < h - n + 1; i++){
               string temp = haystack.substr(i, n);
               if(temp == needle) return i;
          }
          return -1;
     }
};

int main(){
     Solution sol;
     string haystack, needle;
     cin>>haystack>>needle;
     cout<<sol.strStr(haystack, needle);
     return 0;   
}