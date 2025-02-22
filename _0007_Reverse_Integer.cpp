#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x != 0) {
            int d = x % 10;
            if(ans > INT_MAX / 10 || ans < INT_MIN / 10) {
                return 0;
            }
            ans = ans * 10 + d;
            x /= 10;
        }
        return (x > 0 ? -1 * ans : ans);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int a; cin >> a;
    cout << sol.reverse(a) << '\n';
    return 0;
}

