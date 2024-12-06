#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        // unordered_set<int> bannedSet(banned.begin(), banned.end());
        // int sum = 0, ans = 0;
        // for(int i = 1; i <= n; i++) {
        //     if(bannedSet.find(i) == bannedSet.end() && sum + i <= maxSum) {
        //         sum += i;
        //         ans++;
        //     }
        //     else if(sum + i > maxSum) break;
        // }
        // return ans;

        vector<int> ban(1e4 + 1, 0);
        for(int i : banned) ban[i]++;
        int sum = 0, ans = 0;
        for(int i = 1; i <= n; i++) {
            if(ban[i] == 0 && sum + i <= maxSum) {
                sum += i;
                ans++;
            }
            else if(sum + i > maxSum) break;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	Solution sol;
  	vector<int> banned;
  	int val;
  	while(cin >> val) {
  		banned.push_back(val);
  		if(cin.get() == '\n') break;
  	}  
  	int n, maxSum;
  	cin >> n >> maxSum;
  	cout << sol.maxCount(banned, n, maxSum);
    return 0;
}