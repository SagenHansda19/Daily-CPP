#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        for(int i = 1; i < n; i++) {
            string in = "";
            int cnt = 1;
            for(int j = 1; j < ans.size(); j++) {
                if(ans[j] == ans[j - 1]) cnt++;
                else {
                    in += to_string(cnt) + ans[j - 1];
                    cnt = 1;
                }
            }
            in += to_string(cnt) + ans.back();
            ans = in;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n; cin >> n;
    cout << sol.countAndSay(n) << '\n';
    return 0;
}

