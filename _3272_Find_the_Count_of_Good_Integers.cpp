#include <bits/stdc++.h>
using namespace std;

class Solution {
    using ll = long long;
public:
    ll countGoodIntegers(int n, int k) {
        unordered_set<string> dd;
        int base = pow(10, (n - 1) / 2);
        int gogo = n & 1;
        for(int i = base; i < base * 10; i++) {
            string s = to_string(i);
            s += string(s.rbegin() + gogo, s.rend());
            ll ppint = stoll(s);
            if(ppint % k == 0) {
                sort(s.begin(), s.end());
                dd.emplace(s);
            }
        }
        vector<ll> ff(n + 1, 1);
        ll ans = 0;
        for(int i = 1; i <= n; i++) {
            ff[i] = ff[i - 1] * i;
        }
        for(const string &s : dd) {
            vector<int> cc(10);
            for(char c : s) cc[c - '0']++;
            ll tot = (n - cc[0]) * ff[n - 1];
            for(int i : cc) {
                tot /= ff[i];
            }
            ans += tot;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n, k;
    cin >> n >> k;
    cout << sol.countGoodIntegers(n, k) << '\n';
    return 0;
}

