#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
     bool isPal(string s){
          int l = 0, r = s.length() - 1;
          bool ans = true;
          while(l < r){
               if(s[l] != s[r]){
                    ans = false;
                    break;  
               } 
               l++;
               r--;
          }
          return ans;
     }
public:
     vector<vector<int>> palindromePairs(vector<string>& words) {
          vector<vector<int>> ans;
          int n = words.size();
          string tm = "";
          for(int i = 0; i < n; i++){
               for(int j = 0; j < n; j++){
                    if(i != j){
                         tm = words[i] + words[j];
                         if(isPal(tm)) ans.push_back({i, j});
                    }
               }
          }
          return ans;
     }
};

int main(){
     vector<string> words = {"abcd","dcba","lls","s","sssll"};
     Solution sol;
     vector<vector<int>> ans = sol.palindromePairs(words);
     for(auto a : ans){
          for(auto b : a) cout << b << " ";
          cout << endl;
     }
     return 0;
}