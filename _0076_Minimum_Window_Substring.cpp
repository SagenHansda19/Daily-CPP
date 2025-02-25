#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool is(vector<int>& f1, vector<int>& f2) {
        for(int i = 0; i < 128; i++) {
            if(f2[i] > 0 && f1[i] < f2[i]) return false;
        }
        return true;
    }
public:
    string minWindow(string s, string t) {
        int n = s.length(), l = 0, r = 0, len = INT_MAX, st = 0;
        vector<int> f1(128, 0), f2(128, 0);
        for(char c : t) {
            f2[c]++;
        }
        while(r < n) {
            f1[s[r]]++;
            r++;
            while(is(f1, f2) && l < r) {
                if(r - l < len) {
                    len = r - l;
                    st = l;
                }
                f1[s[l]]--;
                l++;
            }
        }
        return (len == INT_MAX) ? "" : s.substr(st, len);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s, t;
    cin >> s >> t;
    cout << sol.minWindow(s, t) << '\n';
    return 0;
}

