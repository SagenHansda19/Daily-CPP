#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        for (int i = 0; i<n; i++){
            result.push_back(nums[i]);
            result.push_back(nums[n+i]);
        }
        return result;
    }
};

int main(){
    Solution sol;
    vector<int> nums;
    int val;
    while(cin>>val){
        nums.push_back(val);
        if(cin.get() == '\n'){
            break;
        }
    }   
    int n;
    cin>>n;
    vector<int> res = sol.shuffle(nums, n);
    cout << "[";
    for(int i=0; res.size() > 0 && i<res.size(); i++){
        cout << res[i];
        if(i != res.size()-1){
            cout << ", ";
        }
    }
    cout<<"]";
    return 0;
}