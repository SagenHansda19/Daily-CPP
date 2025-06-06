#include <iostream>
#include <map>
#include <stack>
#include <string>
using namespace std;

class Solution {
   public:
    string robotWithString(string s) {
        map<char, int> cnt;
        for (char c : s) {
            cnt[c]++;
        }
        stack<char> stk;
        string ans;
        char mn = 'a';
        for (char c : s) {
            stk.emplace(c);
            cnt[c]--;
            while (mn != 'z' && cnt[mn] == 0) {
                mn++;
            }
            while (!stk.empty() && stk.top() <= mn) {
                ans.push_back(stk.top());
                stk.pop();
            }
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s;
    cin >> s;
    cout << sol.robotWithString(s) << '\n';
    return 0;
}
