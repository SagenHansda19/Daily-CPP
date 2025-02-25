#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool is(vector<int>& f, int l, int k) {
        int mx = *max_element(f.begin(), f.end());
        if(l - mx <= k) return true;
        return false;
    }
public:
    int characterReplacement(string s, int k) {
        int n = s.length(), l = 0, r = 0, ans = 0;
        vector<int> f(26, 0);
        while(r < n) {
            f[s[r] - 'A']++;
            r++;
            if(!is(f, r - l, k)) {
                f[s[l] - 'A']--;
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
    int k; cin >> k;
    cout << sol.characterReplacement(s, k) << '\n';
    return 0;
}

