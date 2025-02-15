#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool partition(string s, int target) {
        if(s == "" && target == 0) return true;
        if(target < 0) return false;
        for(int i = 0; i < s.length(); i++) {
            string l = s.substr(0, i + 1);
            string r = s.substr(i + 1);
            int lnum = stoi(l);
            if(partition(r, target - lnum)) return true;
        }
        return false;
    }
public:
    int punishmentNumber(int n) {
        int ans = 0;
        for(int i = 1; i <= n; i++) {
            if(partition(to_string(i * i), i)) ans += i * i;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n; cin >> n;
    cout << sol.punishmentNumber(n) << '\n';
    return 0;
}

