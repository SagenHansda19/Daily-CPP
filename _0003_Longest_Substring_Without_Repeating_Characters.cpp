#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool is(vector<int>& f) {
        for(int i : f) {
            if(i > 1) return false;
        }
        return true;
    }
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        vector<int> f(256, 0);
        int ans = 0;
        int l = 0, r = 0;
        while(r < n) {
            f[static_cast<int>(s[r])]++;
            r++;
            if(!is(f)) {
                f[static_cast<int>(s[l])]--;
                l++;
            }
            ans = max(ans, r - l);
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s; cin >> s;
    cout << sol.lengthOfLongestSubstring(s) << '\n';
    return 0;
}

