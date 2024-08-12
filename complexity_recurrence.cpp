#include <iostream>
#include <cmath>
using namespace std;
void getComplexity(int a, int b, int c, int p)
{
     double log_b_a = log(a) / log(b);
     if(c < log_b_a)
     {
          cout<<"T(n) = O(n^" << log_b_a <<")\n";
     }
     else if(c == log_b_a)
     {
          if(p<-1)
          {
               cout<<"T(n) = O(n^" << c <<")\n";
          }
          else if(p==-1)
          {
               cout<<"T(n) = O(n^" << c << " * log log(n))\n";
          }
          else if(p>-1)
          {
               cout<<"T(n) = O(n^" << c << " * log^" << p+1 <<"(n))\n";
          }
          // cout<<"T(n) = O(n^" << log_b_a << " * log(n)) \n";
     }
     else
     {
          if(p>=0)
          {
               cout<<"T(n) = O(n^" << c << " * log^" << p <<"(n))\n";
          }
          else
          {
               cout<<"T(n) = O(n^" << c << ")\n";
          }
          // cout<<"T(n) = O(n^" << c << ")\n";
     }
}

int main()
{
     int a,b,c,p;
     cout<<"Enter the values of a,b,c and p in the recurrence T(n) = aT(n/b) + n^c :\n";
     cin>>a>>b>>c>>p;
     if(a<=0 || b<=1)
     {
          cerr<<"Invalid input. 'a' must be >=1 and 'b' must be >1";
          return 1;
     }
     getComplexity(a,b,c,p);
     return 0;
}