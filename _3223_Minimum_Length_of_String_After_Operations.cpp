#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        vector<int> fr(26);
        for(char &i : s) {
            fr[i - 'a']++;
        }
        for(int i = 0; i < 26; i++) {
            if(fr[i] > 2) {
                if(fr[i] % 2 == 0) fr[i] = 2;
                else fr[i] = 1;
            }
        }
        return accumulate(fr.begin(), fr.end(), 0);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s; cin >> s;
    cout << sol.minimumLength(s);
    cout << '\n';
    return 0;
}

