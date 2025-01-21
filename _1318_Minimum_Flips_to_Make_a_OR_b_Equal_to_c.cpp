#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans = 0;
        while(a > 0 || b > 0 || c > 0) {
            int ba = a & 1;
            int bb = b & 1;
            int bc = c & 1;
            if(bc == 0) {
                ans += (ba + bb);
            }
            else {
                if(ba == 0 && bb == 0) ans++;
            }
            a >>= 1;
            b >>= 1;
            c >>= 1;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    cin a, b, c;
    cin >> a >> b >> c;
    cout << sol.minFlips(a, b, c) << '\n';
    return 0;
}

