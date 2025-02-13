#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.length(), m = p.length();
        if(n < m) return {};
        vector<int> a(26, 0), b(26, 0), ans;
        // for(char i : p) {
        //     b[i - 'a']++;
        // }
        for(int i = 0; i < m; i++) {
            b[p[i] - 'a']++;
            a[s[i] - 'a']++;
        }
        if(a == b) ans.push_back(0);
        for(int i = m; i < n; i++) {
            a[s[i] - 'a']++;
            a[s[i - m] - 'a']--;
            if(a == b) ans.push_back(i - m + 1);
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string a, b;
    cin >> a >> b;
    vector<int> ans = sol.findAnagrams(a, b);
    int n = ans.size();
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " \n"[i == n - 1];
    }
    return 0;
}

