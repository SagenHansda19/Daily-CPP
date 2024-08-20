#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
     string reverseWords(string s) {
          int n = s.size();
          string temp = "";
          string ans = "";
          int i = 0;
          while(i < n){
               temp = "";
               while(s[i] != ' ' && i < n){
                    temp += s[i];
                    i++;
               }
               while(s[i] == ' ' && i < n){
                    i++;
               }
               if(!temp.empty()){
                    if(ans.empty()){
                         ans += temp;
                    }
                    else{
                         ans = temp+' '+ans;
                    }
               }
          }
          return ans;
     }
};
int main(){
     Solution sol;
     string s = "  hello world  ";
     cout<<sol.reverseWords(s);
     return 0;
}