#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     string reverseWords(string s) {
          int i = 0;
          int l = 0;
          while(i < s.length()){
               if(s[i] == ' '){
                    int r = i - 1;
                    while(l < r){
                         swap(s[l], s[r]);
                         l++;
                         r--;
                    }
                    l = i+1;
               }
               else if(i == s.length() - 1){ 
                    int r = i;
                    while(l < r){
                         swap(s[l], s[r]);
                         l++;
                         r--;
                    }
               }
               i++;
          }
          return s;
     }
};

int main(){
     Solution sol;
     string s;
     getline(cin, s);
     cin.ignore();
     cout << sol.reverseWords(s);
     return 0;
}