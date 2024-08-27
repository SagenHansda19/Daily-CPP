#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     int x = 0;
     int n;
     cin>>n;
     string str;
     while(n-->0){
          cin>>str;
          if(str == "X++" || str == "++X"){
               x++;
          }
          else if(str == "--X" || str == "X--"){
               x--;
          }
     }
     cout<<x<<endl;
     return 0;
}