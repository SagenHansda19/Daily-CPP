#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long coloredCells(int n) {
        long long ans = 1;
        for(int i = 0; i < n; i++) {
            ans += (long long)(i * 4);
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n; cin >> n;
    cout << sol.coloredCells(n) << '\n';
    return 0;
}

