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
    int countGoodSubstrings(string s) {
        int n = s.length(), ans = 0;
        for(int i = 0; i < n - 2; i++) {
            vector<int> f(26, 0);
            for(int j = i; j < i + 3; j++) {
                f[s[j] - 'a']++;
            }
            if(is(f)) ans++;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s; cin >> s;
    cout << sol.countGoodSubstrings(s) << '\n';
    return 0;
}

