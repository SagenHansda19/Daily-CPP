#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
          string word_1 = "";
          string word_2 = "";
          for(auto s : word1){
               word_1.append(s);
          }
          for(auto p : word2){
               word_2.append(p);
          }
          if(word_1 == word_2){
               return true;
          }
          return false;
     }
};

int main(){
     Solution sol;
     vector<string> word1 = {"ab", "c"};
     vector<string> word2 = {"a", "bc"};
     bool answer = sol.arrayStringsAreEqual(word1, word2);
     if(answer == true) cout<<"True"<<endl;
     else cout<<"False"<<endl;
     return 0;
}