#include <algorithm>
#include <cassert>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

class Solution {
   public:
    int maxCandies(vector<int>& status, vector<int>& candies,
                   vector<vector<int>>& keys,
                   vector<vector<int>>& containedBoxes,
                   vector<int>& initialBoxes) {
        bool is = true;
        int ans = 0;
        while (!initialBoxes.empty() && is) {
            is = false;
            vector<int> nt;
            for (int i : initialBoxes) {
                if (status[i]) {
                    is = true;
                    nt.insert(end(nt), begin(containedBoxes[i]),
                              end(containedBoxes[i]));
                    for (int j : keys[i]) status[j] = 1;
                    ans += candies[i];
                } else {
                    nt.push_back(i);
                }
            }
            swap(initialBoxes, nt);
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
