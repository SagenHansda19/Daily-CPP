#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long int factorial(int n);

int main() {
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}


long int factorial(int n)
{
    if(n>=1)
    {
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }
}