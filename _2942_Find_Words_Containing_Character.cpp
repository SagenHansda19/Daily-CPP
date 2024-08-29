#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
     vector<int> findWordsContaining(vector<string>& words, char x) {
          vector<int> result;
          for(int i = 0; i < words.size(); i++){
               string temp = words[i];
               for(int j = 0; j < temp.length(); j++){
                    if (temp[j] == x){
                         result.push_back(i);
                         break;
                    }                
               }
          }
          return result;
     }
};

int main(){
     Solution sol;
     vector<string> words {"abc","bcd","aaaa","cbc"};
     char x = 'a';
     // string val;
     // while(true){
     //      getline(cin, val);
     //      if(val.empty()){
     //           break;
     //      }
     //      words.push_back(val);
     // }
     // cin>>x;
     vector<int> res = sol.findWordsContaining(words, x);
     cout << "[";
     for(int i=0; res.size() > 0 && i<res.size(); i++){
         cout << res[i];
         if(i != res.size()-1){
             cout << ", ";
         }
     }
     cout<<"]";
     return 0;
}