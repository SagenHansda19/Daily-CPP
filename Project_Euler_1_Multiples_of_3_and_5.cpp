#include <iostream>
using namespace std;

long long sum_of_multiple(long long x, long long n)
{
    int k = (n-1) / x; /*larget integer k such that k multiplied by x is 
                            less than n i.e. k=3 for x=3 and n=10 k*x < n*/ 
    return x * k * (k+1) / 2; /* using n(n+1)/2 formula and multiplying it 
                                by x so int his case k=3 and x=3 and when 
                                we multiply is means 3(1+2+3)=18 which is 
                                multiple of 3 with 1,2,3 respectively and
                                also sums it up */
}


int main(){
    long long t;
    cin >> t;
    for(long long a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        long long sum = sum_of_multiple(3,n) + sum_of_multiple(5,n) - sum_of_multiple(15,n);    
               /* we exclude multiples of 15 because it it includes multiples
               of 3 and multiples of 5 so we remove it from the sum and end*/
        cout<<sum<<endl;
    }
    return 0;
}