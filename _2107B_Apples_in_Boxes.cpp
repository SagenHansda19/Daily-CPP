#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int sum = accumulate(a.begin(), a.end(), 0LL);
    sort(a.begin(), a.end());
    a.back()--;
    sort(a.begin(), a.end());
    if(a.back() - a[0] > k) {
        cout << "Jerry\n";
    } else if(sum % 2 == 0) {
        cout << "Jerry\n";
    } else {
    cout << "Tom\n";
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

