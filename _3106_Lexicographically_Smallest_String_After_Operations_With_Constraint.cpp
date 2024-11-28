#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getSmallestString(string s, int k) {
        for(int i = 0; i < s.length(); i++){
            if(k == 0) return s;
            int dist_to_a = min(s[i] - 'a', 'z' + 1 - s[i]);
            if(dist_to_a <= k){
                s[i] = 'a';
                k -= dist_to_a;
            }
            else{
                s[i] = s[i] - k;
                k = 0;
            }
        }
        return s;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	Solution sol;
  	string s; cin >> s;
  	int k; cin >> k;
  	cout << sol.getSmallestString(s, k) <<  endl;  
    return 0;
}
    