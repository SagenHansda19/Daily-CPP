#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length() < k) return false;
        vector<int> fr(26);
        int n = s.length();
        for(char &i : s) {
            fr[i - 'a']++;
        }
        //for(int &i : fr) cout << i << " ";
        //cout << '\n';
        int oc = 0;
        for(int &i : fr) {
            if(i % 2 == 1) oc++;
        } 
        if(oc > k) return false;
        return true;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s; int k;
    cin >> s >> k;
    (sol.canConstruct(s, k)) ? cout << "YES" : cout <<  "NO";
    return 0;
}

