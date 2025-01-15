#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int btcnt = __builtin_popcount(num2);
        int ans = 0;
        for(int i = 31; i >=0 && btcnt; i--) {
            if(num1 & (1 << i)) {
                btcnt--;
                ans += (1 << i);
            }
        }        
        for(int i = 0; i < 32 && btcnt; i++) {
            if((num1 & (1 << i)) == 0) {
                btcnt--;
                ans += (1 << i);
            }
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int num1, num2; 
    cin >> num1 >> num2;
    cout << sol.minimizeXor(num1, num2);
    cout << '\n';
    return 0;
}

