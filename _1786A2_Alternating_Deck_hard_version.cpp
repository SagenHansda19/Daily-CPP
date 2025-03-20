#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
    int i = 1, pr = 0;
    while(n) {
        int val = min(i, n);
        if(i % 4 == 1 || i % 4 == 0) {
            a1 += val / 2;
            a2 += val / 2;
            if(val & 1) {
                if(pr & 1) a2++;
                else a1++;
            }
        } else {
            b1 += val / 2;
            b2 += val / 2;
            if(val & 1) {
                if(pr & 1) b2++;
                else b1++;
            } 
        }
        n -= val;
        i++;
        pr += (val % 2);
        pr %= 2;
    }
    cout << a1 << " " << a2 << " " << b1 << " " << b2 << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

