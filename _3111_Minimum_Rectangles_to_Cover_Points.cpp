#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        vector<int> a;
        int n = points.size();
        for(int i = 0; i < n; i++) a.push_back(points[i][0]);
        sort(begin(a), end(a));
        int l = 0, r = 0;
        int ans = 1;
        while(l < a.size()){
            if(a[l] - a[r] > w){
                ans++;
                r = l;
            }
            l++;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	Solution sol;
  	vector<vector<int>> points;
  	vector<int> val(2);
  	while(true){
  		cin >> val[0] >> val[1];
  		points.push_back(val);
  		if(cin.get() == '\n') break;
  	}
  	int w; cin >> w;
  	cout << sol.minRectanglesToCoverPoints(points, w) << endl;
    return 0;
}
    