#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(){
     string s;
     cin>>s;
     if(islower(s[0])) s[0] = toupper(s[0]);
     cout<< s;
}

int main(){
     solve();
     return 0;
}