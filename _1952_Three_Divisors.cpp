#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isThree(int n) {
        int cnt = 0;
        for(int i = 1; i <= n; i++) {
            if(n % i == 0) cnt++;
        }
        if(cnt == 3) return true;
        else return false;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n; cin >> n;
    (sol.isThree(n)) ? cout << "True\n" : cout << "False\n"; 
    return 0;
}

