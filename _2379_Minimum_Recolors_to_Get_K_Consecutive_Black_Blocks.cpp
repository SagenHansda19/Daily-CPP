#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.length(), l = 0, r = 0;
        int b = 0, w = 0, ans = INT_MAX;
        while(r < n) {
            b += blocks[r] == 'B';
            w += blocks[r] == 'W';
            r++;
            if(b + w == k) {
                ans = min(ans, w);
                b -= blocks[l] == 'B';
                w -= blocks[l] == 'W';
                l++;
            }
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s; cin >> s;
    int k; cin >> k;
    cout << sol.minimumRecolors(s, k) << '\n';
    return 0;
}

