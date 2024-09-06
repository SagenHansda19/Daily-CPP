#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     int mostWordsFound(vector<string>& sentences) {
          int maxm = 0;
          for(auto s : sentences){
               int count = 1;
               for(int i = 0; i < s.length(); i++){
                    if(s[i] == ' '){
                         count++;
                    }
                    else{
                         continue;
                    }
               }
               maxm = max(count, maxm);
          }
          return maxm;
     }
};

int main(){
     Solution sol;
     vector<string> sentences = {"alice and bob love leetcode", "i think so", "this is great thanks very much"};
     cout << sol.mostWordsFound(sentences) << endl;
     return 0;
}