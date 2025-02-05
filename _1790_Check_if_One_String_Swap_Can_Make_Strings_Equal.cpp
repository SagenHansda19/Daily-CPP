#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.length();
        int w = 0;
        vector<int> sw1(26, 0), sw2(26, 0);
        for(int i = 0; i < n; i++) {
            sw1[s1[i] - 'a']++;
            sw2[s2[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++) {
            if(sw1[i] != sw2[i]) return false;
        }
        for(int i = 0; i < n; i++) {
            if(s1[i] != s2[i]) w++;
        }
        return w == 2 || w == 0;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string a, b;
    cin >> a >> b;
    cout << (sol.areAlmostEqual(a, b) ? "True\n" : "No\n");
    return 0;
}

