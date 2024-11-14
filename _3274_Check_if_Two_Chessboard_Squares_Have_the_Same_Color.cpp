#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     bool checkTwoChessboards(string c1, string c2) {
          if(c1 == c2) return true;
          int s1 = (c1[0] - 'a') + (c1[1] - '1'), s2 = (c2[0] - 'a') + (c2[1] - '1');
          return (s1 % 2) == (s2 % 2);
     }
};

int main(){
     Solution sol;
     string c1, c2;
     cin>>c1>>c2;
     string ans = (sol.checkTwoChessboards(c1, c2)) ? "True" : "False";
     cout<<ans<<endl;
     return 0;
}    