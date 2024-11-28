#include <bits/stdc++.h>
using namespace std;

int maxRibbonPieces(int n, vector<int> lens){
	vector<int> dp(n + 1, -1);
	dp[0] = 0;
	for(int i = 1; i <= n; i++){
		for(int len : lens){
			if(i >= len && dp[i - len] != -1){
				dp[i] = max(dp[i], dp[i - len] + 1);
			}
		}
	}
	return dp[n];
}

void solve(){
	int n; cin >> n;
	vector<int> lens(3);
	for(int i = 0; i < 3; i++){
		cin >> lens[i];
	}
	cout << maxRibbonPieces(n, lens) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
    