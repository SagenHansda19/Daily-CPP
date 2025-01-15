#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     string firstPalindrome(vector<string>& words) {
          string ans = "";
          for(auto x : words){
               int l = 0;
               int r = x.length() - 1;
               int count = 0;
               while(l < r){
                    if(x[l] == x[r]){
                         count++;
                    }
                    l++;
                    r--;
               }
               if(count == x.length() / 2){
                    ans = x;
                    break;
               }
          }
          return ans;
     }
};

int main(){
     Solution sol;
     vector<string> words = {"abc","car","ada","racecar","cool"};
     cout << sol.firstPalindrome(words) << endl;
     return 0;
}