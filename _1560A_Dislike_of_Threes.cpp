#include <bits/stdc++.h>
using namespace std;

vector<int> a;
void make() {
    int i = 1;
    while(a.size() < 1001) {
        if(i % 3 != 0 && i % 10 != 3) a.push_back(i);
        i++;
    }
}

void solve() {
    int k; cin >> k;
    cout << a[k - 1] << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    make();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

