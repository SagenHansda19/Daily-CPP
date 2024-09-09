#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
          vector<int> answer;
          for(auto x : queries){
               int count = 0;
               for(auto y : points){
                    if(sqrt((x[0] - y[0])*(x[0] - y[0]) + (x[1] - y[1])*(x[1] - y[1])) <= x[2]){ //checks
                         count++;
                    }
               }
               answer.push_back(count);
          }
          return answer;
     }
};

int main(){
     Solution sol;
     vector<vector<int>> points = {{1, 3}, {3, 3}, {5, 3}, {2, 2}};
     vector<vector<int>> queries = {{2, 3, 1}, {4, 3, 1}, {1, 1, 2}};
     vector<int> result = sol.countPoints(points, queries);
     cout << "[";
     for(int i = 0; i < result.size(); i++){
          cout << result[i];
          if(i != result.size() - 1){
               cout << ", ";
          }
     }
     cout << "]";
     cout << endl;
     return 0;
}