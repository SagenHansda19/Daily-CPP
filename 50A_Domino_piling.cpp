#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     int m, n;
     cin>>m>>n;
     int area = m * n;
     if(area % 2 == 0 || area % 2 == 1) cout<< area / 2;
}