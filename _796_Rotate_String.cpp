#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     bool rotateString(string s, string goal) {
          string temp = s;
          if(s.length() != goal.length()) return false;
          for(int i = 0; i < s.length(); i++){
               char t = temp[0];
               for(int j = 1; j < s.length(); j++){
                    temp[j - 1] = temp[j];
               }
               temp[s.length() - 1] = t;
               if(temp == goal) return true;
          }
          return false;
     }
};

int main(){
     Solution sol;
     string s, goal;
     cin>>s>>goal;
     if(sol.rotateString(s, goal)) cout<<"True"<<endl;
     else cout<<"False"<<endl;
     return 0;   
}