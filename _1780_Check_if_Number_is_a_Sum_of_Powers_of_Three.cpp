#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkPowersOfThree(int n) {
        int i = 0;
        while(pow(3, i + 1) <= n) i++;
        while(i >= 0) {
            if(pow(3, i) <= n) n -= pow(3, i);
            i--;
        }
        return n == 0;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n; cin >> n;
    cout << (sol.checkPowersOfThree(n) == true ? "True\n" : "False\n"); 
    return 0;
}

