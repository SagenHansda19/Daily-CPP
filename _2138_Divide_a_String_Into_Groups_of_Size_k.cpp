#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int n = s.size();
        string x = "";
        for(int i = 0; i < n; i++) {
            x += s[i];
            if(x.size() == k) {
                ans.push_back(x);
                x = "";
            }
            else if(i == n - 1 && x.size() != k) {
                while(x.size() < k) x += fill;
                ans.push_back(x);
            }
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    stirng s;
    int k;
    char f;
    cin >> s >> k >> f;
    cout << sol.divideString(s, k, f) << '\n';
    return 0;
}

