#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int a = left, b = right;
        int la = 0, lb = 0;
        while(a > 1) {
            a /= 2;
            la++;
        }
        while(b > 1) {
            b /= 2;
            lb++;
        }
        int ans = left;
        if(la == lb) {
            for(long long i = left; i <= right; i++) {
                ans &= i;
            }
            return ans;
        }
        return 0;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int a, b;
    cin >> a >> b;
    cout << sol.rangeBitwiseAnd(a, b) << '\n';
    return 0;
}

