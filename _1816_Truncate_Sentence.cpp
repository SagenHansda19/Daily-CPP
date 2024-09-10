#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     string truncateSentence(string s, int k) {
          int count = 0;
          string output = "";
          for(auto x : s){
               if(x == ' '){
                    count++;
               }
               if(count == k){
                    break;
               }
               output += x;
          }
          return output;
     }
};

int main(){
     Solution sol;
     string s;
     getline(cin, s);
     int k;
     cin>>k;
     cin.ignore();
     cout<<sol.truncateSentence(s, k);
     return 0;
}