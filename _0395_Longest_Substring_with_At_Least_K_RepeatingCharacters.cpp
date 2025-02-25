#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool is(vector<int>& f, int k) {
        for(int i : f) {
            if(i > 0 && i < k) return false;
        }
        return true;
    }
public:
    int longestSubstring(string s, int k) {
        int n = s.length(), l = 0, ans = 0;
        while(l < n) {
            vector<int> f(26, 0);
            int r = l;
            while(r < n) {
                f[s[r] - 'a']++;
                if(is(f, k)) ans = max(ans, r - l + 1);
                r++;
            }
            l++;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s;
    int k;
    cin >> s >> k;
    cout << sol.longestSubstring(s, k) << '\n';
    return 0;
}

