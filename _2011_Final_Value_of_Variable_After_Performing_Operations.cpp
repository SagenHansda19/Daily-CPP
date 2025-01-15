#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (string op : operations){
            if(op == "X++" || op == "++X"){
                x++;
            }
            else{
                x--;
            }
        }
        return x;
    }
};

int main(){
     Solution sol;
     vector<string> operations;
     string val;
     while(cin>>val){
          operations.push_back(val);
          if(cin.get() == '\n'){
               break;
          }
     }
     cout<<sol.finalValueAfterOperations(operations);
     return 0;
}