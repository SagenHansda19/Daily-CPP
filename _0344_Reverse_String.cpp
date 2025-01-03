#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     void reverseString(vector<char>& s) {
          int n = s.size();
          int j = 0;
          int l = 0, r = n - 1;
          while(l < r){
               char temp = s[l];
               s[l] = s[r];
               s[r] = temp;
               l++;
               r--;
          }
     }
};

int main(){
     vector<char> s = {'h','e','l','l','o'};
     Solution sol;
     sol.reverseString(s);
     for(auto a : s) {
          cout<<a<<" ";
     }
}