#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums[0].length();
        string ans;
        for(int i = 0; i < n; i++) {
            char c = nums[i][i];
            ans += c == '0' ? '1' : '0';
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<string> a;
    string s;
    while(cin >> s) {
        a.push_back(s);
        if(cin.get() == '\n') break;
    }
    cout << sol.findDifferentBinaryString(a) << '\n';
    return 0;
}

