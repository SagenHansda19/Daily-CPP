#include <iostream>
using namespace std;

static int countConsecutive(int n)
{
  int count = 0;
  while(n>0)
  {
    n = ( n & (n << 1));//we are doing bitwise and operation after left 
                        //shifting the number by one. 
                        //0110101
                        //1101010(n<<1)
                        //________
                        //0100000(count=1)
                        //1000000(n<<1)
                        //_______
                        //0000000 = 0(count = 2 )
    count++;
  }
  return count;
} 
int main()
{
  int num;
  cin>>num;
  cout<<countConsecutive(num);
}