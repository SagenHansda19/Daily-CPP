#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++) {
            for(int j = 0; j < arr.size(); j++){
                if(i != j){
                    if(arr[i] == 2 * arr[j]) return true;
                }
            }
        }
        return false;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	Solution sol;
  	vector<int> arr;
  	int val;
  	while(cin >> val) {
  		arr.push_back(val);
  		if(cin.get() == '\n') break;
  	}
  	string ans = sol.checkIfExist(arr) ? "YES" : "NO" ;
  	cout << ans;
    return 0;
}
    