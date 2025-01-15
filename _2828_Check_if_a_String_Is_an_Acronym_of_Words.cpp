#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     bool isAcronym(vector<string>& words, string s) {
          string ans = "";
          for(int i = 0; i < words.size(); i++){
               ans += words[i][0];
          }
          return ans == s;    
     }
};

int main(){
     Solution sol;
     vector<string> words = {"alice","bob","charlie"};
     string s = "abc";
     cout << boolalpha << sol.isAcronym(words, s) << endl;
     return 0;
}