#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> prefix(n, 0);
        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1];
            if(nums[i - 1] % 2 == 0 && nums[i] % 2 == 0 || nums[i - 1] % 2 != 0 && nums[i] % 2 != 0) {
                prefix[i]++;
            }
        }

        vector<bool> ans;
        for(auto& q : queries) {
            int l = q[0], r = q[1];
            int spec = prefix[r] - (l > 0 ? prefix[l] : 0);
            ans.push_back(spec == 0);
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	Solution sol;
  	vector<int> nums;
  	int val;
  	while(cin >> val) {
  		nums.push_back(val);
  		if(cin.get() == '\n') break;
  	}  
  	// vector<vector<int>> queries;
  	vector<vector<int>> grid;
  	vector<int> row;
  	int val1;
  	while (true) {
  	    cin >> val1;
  	    row.push_back(val1);
  	    if (cin.get() == '\n') {
  	        break;
  	    }
  	}
  	int n = row.size();
  	grid.push_back(row);
  	for (int i = 1; i < n; ++i) {
  	    vector<int> newRow;
  	    for (int j = 0; j < n; ++j) {
  	        cin >> val;
  	        newRow.push_back(val);
  	    }
  	    grid.push_back(newRow);
  	}
  	vector<bool> ans = sol.isArraySpecial(nums, grid);
  	for(bool i : ans) {
  		cout << (i ? "True" : "False") << " ";
  	}
  	cout << '\n';
    return 0;
}
    