#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map <int,int> mp , left;
        for(int it : nums) mp[it]++;
        for(int i = 0 ; i < nums.size()-1; i++){
            left[nums[i]]++, mp[nums[i]]--;
            if(left[nums[i]] * 2 > (i + 1) && mp[nums[i]] * 2 > (nums.size()-i-1)) return i;
        }
        return -1;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a;
    int val;
    while (cin >> val) {
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cout << sol.minimumIndex(a) << '\n';
    return 0;
}

