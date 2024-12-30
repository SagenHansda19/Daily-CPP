#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        const int mod = 1e9 + 7;
        vector<int> dp(high + 1, 0);
        ll ans = 0;
        dp[0] = 1;
        for(int i = 1; i <= high; i++) {
            if(i >= zero) dp[i] += dp[i - zero];
            if(i >= one) dp[i] += dp[i - one];

            dp[i] %= mod;

            if(i >= low) {
                ans += dp[i];
                ans %= mod;
            }
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	Solution sol;
  	int l, h, z, o;
  	cin >> l >> h >> z >> o;
  	cout << sol.countGoodStrings(l, h, z, o);  
    return 0;
}
    