#include <iostream>
#include <map>
#include <string>
using namespace std;

class Solution {
public:
    string clearStars(string s) {
        priority_queue<pair<char, int>, vector<pair<char, int>>, greater<pair<char, int>>> mh;
        map<int, bool> mp;
        int n = s.size();
        for(int i = 0; i < n; i++) {
            if(s[i] == '*') {
                mp[-mh.top().second] == true;
                mh.pop();
            } else {
                mh.push({s[i], -i});
            }
        }
        string ans;
        for(int i = 0; i < n; i++) {
            if(mp.count(i) || s[i] == '*') continue;
            ans += s[i];
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s; cin >> s;
    cout << sol.clearStars(s) << '\n';
    return 0;
}

