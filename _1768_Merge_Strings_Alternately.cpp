#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
          string sol = "";
          int i = 0, j = 0;
          while(i < word1.length() && j < word2.length())
          {
               sol += word1[i++];
               sol += word2[j++];
          }
          while(i < word1.length())
          {
               sol += word1[i++];
          }
          while(j < word2.length())
          {
               sol += word2[j++];
          }
          return sol;
    }
};

int main()
{
     Solution solu;
     string word1, word2;
     cin>>word1>>word2;
     string result = solu.mergeAlternately(word1,word2);
     cout<<result<<endl;
     return 0;
}