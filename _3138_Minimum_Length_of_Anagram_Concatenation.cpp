#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool is(string s, int k) {
        int n = s.length();
        vector<int> f0(26, 0);
        for(int i = 0; i < k; i++) f0[s[i] - 'a']++;
        bool ans = true;
        for(int i = k; i < n; i += k) {
            vector<int> f1(26, 0);
            for(int j = i; j < i + k; j++) {
                f1[s[j] - 'a']++;
            }
            if(f0 != f1) {
                ans = false;
                break;    
            }
        }
        return (ans ? true : false);
    }
public:
    int minAnagramLength(string s) {
        int n = s.length();
        for(int i = 1; i <= n; i++) {
            if(n % i == 0 && is(s, i)) return i;
        }
        return n;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s; cin >> s;
    cout << sol.minAnagramLength(s) << '\n';
    return 0;
}

