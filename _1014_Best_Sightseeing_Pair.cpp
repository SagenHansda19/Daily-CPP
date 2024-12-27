#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int ans = 0;
        int n = values.size();
        int cur_max = values[0] - 1;
        for(int i = 1; i < n; i++) {
            ans = max(ans, values[i] + cur_max);
            cur_max = max(cur_max - 1, values[i] - 1);
        }
        return ans;
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
  	cout << sol.maxScoreSightseeingPair(a);
    return 0;
}
    