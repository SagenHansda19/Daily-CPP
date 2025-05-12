#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size();
        set<int> nms;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                for(int k = 0; k < n; k++) {
                    if(i == j || i == k || j == k) continue;
                    int x = digits[i] * 100 + digits[j] * 10 + digits[k];
                    if(x >= 100 && x % 2 == 0) {
                        nms.insert(x);
                    }
                }
            }
        }
        vector<int> ans(nms.begin(), nms.end());
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int b;
    while(cin >> b) {
        a.push_back(b);
        if(cin.get() == '\n') break;
    }
    vector<int> ans = sol.findEvenNumbers(a);
    int n = ans.size();
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " \n"[i == n - 1];
    }
    return 0;
}

