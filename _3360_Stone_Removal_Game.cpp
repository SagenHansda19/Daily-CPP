#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canAliceWin(int n) {
        int minu = 10, turn = 0;
        if(n < minu) return false;
        while(n >= 0){
            if(n >= minu){
                n -= minu;
                minu--;
            }
            else return turn % 2 == 1;
            turn++;
        }
        return false;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
  	int n; cin >> n;
  	string ans = sol.canAliceWin(n) ? "YES" : "NO";
  	cout << ans << endl;  
    return 0;
}
    