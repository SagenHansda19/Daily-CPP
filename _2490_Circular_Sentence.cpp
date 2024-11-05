#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     bool isCircularSentence(string sentence) {
          bool ans = true;
          if(sentence[0] != sentence[sentence.length() - 1]) return false;
          for(int i = 0; i < sentence.length(); i++){
               if(sentence[i] == ' '){
                    if(sentence[i - 1] != sentence[i + 1]) ans = false;
               }
          }
          return ans;
     }
};

int main(){
     Solution sol;
     string s;
     getline(cin, s);
     if(sol.isCircularSentence(s)) cout<<"True";
     else cout<<"False";
     return 0;   
}