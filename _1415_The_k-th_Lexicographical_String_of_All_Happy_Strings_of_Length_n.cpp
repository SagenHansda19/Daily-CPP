#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool is(string& s) {
        int n = s.size();
        for(int i = 1; i < n; i++) {
            if(s[i] == s[i - 1]) return false;
        }
        return true;
    }
    void make(string& s, int n) {
        if(s.size() == n) {
            if(is(s)) ans.push_back(s);
            return;
        }
        for(char c : {'a', 'b', 'c'}) {
            s.push_back(c);
            make(s, n);
            s.pop_back();
        }
    }
    vector<string> ans;
public:
    string getHappyString(int n, int k) {
        string s = "";
        make(s, n);
        if(ans.size() < k) return "";
        return ans[k - 1];
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n, k;
    cin >> n >> k;
    cout << sol.getHappyString(n, k) << '\n';
    return 0;
}

