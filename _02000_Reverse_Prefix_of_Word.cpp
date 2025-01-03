#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     string reversePrefix(string word, char ch) {
          for(int i = 0; i < word.length(); i++){
               if(word[i] == ch){
                    int left = 0;
                    int right = i;
                    while(left < right){
                         swap(word[left], word[right]);
                         left++;
                         right--;
                    }
                    break;
               }
          }
          return word;
     }
};

int main(){
     Solution sol;
     string word;
     getline(cin, word);
     char ch;
     cin>>ch;
     cin.ignore();
     cout<<sol.reversePrefix(word, ch);
     return 0;   
}