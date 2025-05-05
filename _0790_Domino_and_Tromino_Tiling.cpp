#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    using ll = long long;
    const ll mod = 1e9 + 7;
    int numTilings(int n) {
        if(n <= 1) return 1;
        if(n == 2) return 2;
        if(n == 3) return 5;
        vector<int> dp(n + 1, 0);
        dp[0] = 1, dp[1] = 1, dp[2] = 2, dp[3] = 5;
        for(int i = 4; i <= n; i++) {
            dp[i] = (2 * dp[i - 1] + ll(dp[i - 3])) % mod;
        }
        return dp[n];
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n; cin >> n;
    cout << sol.numTilings(n) << '\n';
    return 0;
}

