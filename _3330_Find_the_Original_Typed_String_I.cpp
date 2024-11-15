#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     int possibleStringCount(string word) {
          int dup = 0;
          for(int i = 1; i < word.length(); i++){
               if(word[i] == word[i - 1]) dup++;
          }
          return dup + 1;
     }
};

int main(){
     Solution sol;
     string word;
     cin>>word;
     cout<<sol.possibleStringCount(word);
     return 0;   
}