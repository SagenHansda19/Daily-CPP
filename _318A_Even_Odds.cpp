#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
using ll = long long;

void solve(){
     ll n, k, even_start = 0;
     cin>>n>>k;
     if(k <= (n + 1) / 2) cout<< k * 2 - 1<< endl;
     else cout << (k - (n + 1) / 2) * 2 << endl;
}

int main(){
     solve();
     return 0;
}