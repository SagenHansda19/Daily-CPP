#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
    ll car(vector<int>& ranks, ll mins) {
        ll cc = 0;
        for(int i : ranks) {
            cc += sqrt(mins / i);
        }
        return cc;
    }
public:
    ll repairCars(vector<int>& ranks, int cars) {
        ll l = 1, r = (ll)*max_element(ranks.begin(), ranks.end()) * (ll)cars * cars;
        ll ans = r;
        while(l < r) {
            ll m = l + (r - l) / 2;
            if(car(ranks, m) >= cars) {
                ans = m;
                r = m;
            } else l = m + 1;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int val;
    ll k;
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cin >> k;
    cout << sol.repairCars(a, k) <<  '\n';
    return 0;

}

