#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool is(int n) {
        int ls = 0, rs = 0;
        string s = to_string(n);
        if(s.length() & 1) return false;
        int l = 0, r = s.length() - 1;
        while(l < r) {
            ls += s[l] - '0';
            rs += s[r] - '0';
            l++; r--;
        } 
        return ls == rs;
    }
public:
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;
        for(int i = low; i <= high; i++) {
            if(is(i)) ans++;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int l, h;
    cin >> l >> h;
    cout << sol.countSymmetricIntegers(l, h) << '\n';
    return 0;
}

