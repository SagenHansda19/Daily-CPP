#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
class Solution {
public:
    long long goodTriplets(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> f;
        int n1 = nums1.size(), n2 = nums2.size();
        for(int i = 0; i < n1; i++) f[nums1[i]] = i;
        ordered_set ss;
        long long ans = 0;
        for(int i = 0; i < n2; i++) {
            int id = f[nums2[i]];
            int l = ss.order_of_key(id);
            int r = (n2 - 1 - id) - (ss.size() - l);
            ans += (long long) l * r;
            ss.insert(id);
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> a, b;
    int val;
    while(cin >> val) { 
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    while(cin >> val) { 
        a.push_back(val);
        if(cin.get() == '\n') break;
    }
    cout << sol.goodTriplets(a, b) << '\n';
    return 0;
}

