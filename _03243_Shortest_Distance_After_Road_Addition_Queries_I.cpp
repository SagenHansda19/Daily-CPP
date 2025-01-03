#include <bits/stdc++.h>
using namespace std;
	
class Solution {
    void dfs(vector<vector<int>>& tree, int c, vector<int>& dp) {
        int d=dp[c]+1;
        for (int x : tree[c]) {
            if (dp[x]<=d) continue;
            dp[x]=d;
            dfs(tree,x,dp);
        }
    }
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<int> dp(n);
        for (int i=0; i<n; ++i) dp[i]=n-1-i;
        vector<vector<int>> tree(n);
        for (int i=0; i+1<n; ++i)
            tree[i+1].push_back(i);
        int m=int(queries.size());
        vector<int> res(m);
        int i=0;
        for (auto& q : queries) {
            int a=q[0], b=q[1];
            tree[b].push_back(a);
            dp[a]=min(dp[a],dp[b]+1);
            dfs(tree,a,dp);
            res[i]=dp[0];
            ++i;
        }
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n; cin >> n;
    vector<vector<int>> queries;
    vector<int> val(2);
    while(true){
    	cin >> val[0] >> val[1];
    	queries.push_back(val);
    	if(cin.get() == '\n') break;
    }
    vector<int> ans = sol.shortestDistanceAfterQueries(n, queries);
    for(int i : ans) cout << i << " ";
    cout << endl;
    return 0;
}
    