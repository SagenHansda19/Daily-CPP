#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool is(vector<int>& f) {
        for(int i : f) {
            if(i == 0) return false;
        }
        return true;
    }
public:
    int numberOfSubstrings(string s) {
        int n = s.length(), l = 0, r = 0, ans = 0;
        vector<int> f(3, 0);
        while(r < n) {
            f[s[r] - 'a']++;
            r++;
            while(l < r && is(f)) {
                ans += n - r + 1;
                f[s[l] - 'a']--;
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
    cout << sol.numberOfSubstrings(s) << '\n';
    return 0;
}

