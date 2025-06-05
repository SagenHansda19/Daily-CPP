#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

class Solution {
public:
    string answerString(string word, int numFriends) {
        int n = word.size();
        if(numFriends == 1) return word;
        int mxp = n - (numFriends - 1);
        string ans = "";
        for(int i = 0; i < n; i++) {
            int can = min(mxp, n - i);
            ans = max(ans, word.substr(i, can));
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s; cin >> s;
    int n; cin >> n;
    cout << sol.answerString(s, n) << '\n';
    return 0;
}

