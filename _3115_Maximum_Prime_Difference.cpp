#include <bits/stdc++.h>
using namespace std;

class Solution {
    int isPrime(int n){
        if(n < 2 || (!(n & 1) && n != 2)) return 0;
        for(int i = 3; i * i <= n; i += 2){
            if(!(n % i)) return 0;
        }
        return 1;
    }
public:
    int maximumPrimeDifference(vector<int>& nums) {
        vector<int> prIndi;
        for(int i = 0; i < nums.size(); i++){
            if(isPrime(nums[i])) prIndi.push_back(i);
        }
        return prIndi[prIndi.size() - 1] - prIndi[0];
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	Solution sol;
  	vector<int> nums;
  	int val;
  	while(cin >> val){
  		nums.push_back(val);
  		if(cin.get() == '\n') break;
  	}  
  	cout << sol.maximumPrimeDifference(nums) << endl;
    return 0;
}
    