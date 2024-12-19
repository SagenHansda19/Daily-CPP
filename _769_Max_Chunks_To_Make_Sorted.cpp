#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int cnt = 0, df = 0;
        for(int i = 0; i < n; i++) {
            df += arr[i] - i;
            cnt += (df == 0);
        }
        return cnt;
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
  	cout << sol.maxChunksToSorted(a);
    return 0;
}
    