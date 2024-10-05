#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     int theMaximumAchievableX(int num, int t) {
          return num + t * 2;   
     }
};

int main(){
     Solution sol;
     int num, k;
     cin>>num>>k;
     cout<<sol.theMaximumAchievableX(num, k);
     return 0;
}