#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     int findPermutationDifference(string s, string t) {
          int sum = 0;
          for(int i = 0; i < s.length(); i++){
               for(int j = 0; j < t.length(); j++){
                    if(s[i] == t[j]){
                         sum += abs(i - j);
                    }
               }
          }
          return sum;
     }
};

int main(){
     Solution sol;
     string s, t;
     cin>> s >> t;
     cout<<sol.findPermutationDifference(s, t);
     return 0;
}