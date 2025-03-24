#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int u = 0, tp = 1;
        sort(meetings.begin(), meetings.end());
        for(auto &i : meetings) {
            u += max(0, i[0] - tp);
            tp = max(tp, i[1] + 1);
            if(tp > days) break;
        }
        return u + max(0, days - tp + 1);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    return 0;
}

