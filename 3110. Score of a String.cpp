#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
     string s;
     cin>>s;
     int score = 0;
     for(int i=0; i<s.length()-1; i+=2)
     {
          score += abs(int(s[i]) - int(s[i+1]));
     }
     for(int i=1; i<s.length()-1; i+=2)
     {
          score += abs(int(s[i]) - int(s[i+1]));
     }
     cout<<score<<endl;
     return 0;
}