#include <bits/stdc++.h>
using namespace std;

using ll = long long;
class Solution {
    const int mod = 1000000007;
public:
    int numOfSubarrays(vector<int>& arr) {
        ll even = 1, odd = 0, pre = 0;
        int ans = 0;
        for(int i : arr) {
            pre += i;
            if(pre % 2 == 1) {
                ans = (ans + even) % mod;
                odd++;
            } else {
                ans = (ans + odd) % mod;
                even++;
            }
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
    while(cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cout << sol.numOfSubarrays(a) << '\n';
    return 0;
}

