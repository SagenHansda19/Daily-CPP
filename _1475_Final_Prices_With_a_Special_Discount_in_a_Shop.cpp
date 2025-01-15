#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(prices[j] <= prices[i]) {
                    prices[i] -= prices[j];
                    break;
                }
            }
        }
        return prices;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	Solution sol;
  	vector<int> a;
  	int val;
  	while(cin >> val) {
  		a.push_back(val);
  		if(cin.get() == '\n') break;
  	}  
  	vector<int> ans = sol.finalPrices(a);
  	for(int i : ans) cout << i << " ";
    return 0;
}
    