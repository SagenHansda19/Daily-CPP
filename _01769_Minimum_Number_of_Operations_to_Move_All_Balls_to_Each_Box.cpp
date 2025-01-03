#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     vector<int> minOperations(string boxes) {
          int n = boxes.length();
          vector<int> result;
          for(int i = 0; i < n; i++){
               int step = 0;
               for(int j = 0; j < n; j++){
                    if(j != i && boxes[j] == '1'){
                         step += abs(i - j);
                    }
               }
               result.push_back(step);
          }
          return result;
     }
};

int main(){
     Solution sol;
     string boxes;
     getline(cin, boxes);
     cin.ignore();
     vector<int> res = sol.minOperations(boxes);
     cout << "[";
     for(int i=0; res.size() > 0 && i<res.size(); i++){
         cout << res[i];
         if(i != res.size()-1){
             cout << ", ";
         }
     }
     cout<<"]";
}