#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
     string convertDateToBinary(string date) {
          int year = stoi(date.substr(0, 4));
          int month = stoi(date.substr(5, 2));
          int day = stoi(date.substr(8, 2));

          string yearb = "";
          while (year > 0) {
               yearb = char((year % 2) + '0') + yearb;
               year /= 2;
          }
          string monthb = "";
          while (month > 0) {
               monthb = char((month % 2) + '0') + monthb;
               month /= 2;
          }
          string dayb = "";
          while (day > 0) {
               dayb = char((day % 2) + '0') + dayb;
               day /= 2;
          }
          string result = yearb + '-' + monthb + '-' + dayb;
          return result;
     }
};

int main(){
     Solution sol;
     string date;
     cin.ignore();
     getline(cin, date);
     cout<<sol.convertDateToBinary(date);
     return 0;
}