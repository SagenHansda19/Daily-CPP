#include <iostream>
#include <vector>
using namespace std;

class Solution {
    using ll = long long;

    ll make_pp(ll n, bool o) {
        ll x = n;
        if(o) x /= 10;
        while(x > 0) {
            n = n * 10 + x % 10;
            x /= 10;
        }
        return n;
    } 

    bool is(ll n, int b) {
        vector<int> d;
        while(n > 0) {
            d.push_back(n % b);
            n /= b;
        }
        int i = 0, j = d.size() - 1;
        while(i < j) {
            if(d[i++] != d[j--]) return false;
        }
        return true;
    }
public:
    ll kMirror(int k, int n) {
        ll s = 0;
        for(ll l = 1; n > 0; l *= 10) {
            for(ll i = l; n > 0 && i < l * 10; i++) {
                ll p = make_pp(i, true);
                if(is(p, k)) {
                    s += p;
                    n--;
                }
            }
            for(ll i = l; n > 0 && i < l * 10; i++) {
                ll p = make_pp(i, false);
                if(is(p, k)) {
                    s += p;
                    n--;
                }
            }
        }
        return s;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n, k;
    cin >> n >> k;
    cout << sol.kMirror(n, k) << '\n';
    return 0;
}

