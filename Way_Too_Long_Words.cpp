#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     string input;
     int n;
     cin>>n;
     while(n-->0){
          cin>>input;
          if(input.length()>10){
               int len = input.length();
               cout<<input[0]<<len-2<<input[len-1]<<endl;
          }
          else{
               cout<<input<<endl;
          }
     }
     return 0;
}