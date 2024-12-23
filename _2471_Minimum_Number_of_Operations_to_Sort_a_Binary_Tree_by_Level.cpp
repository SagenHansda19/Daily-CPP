#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNodeeft;
    TreeNodeight;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNodeeft, TreeNodeight) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int countSwaps(vector<int>& arr) {
        vector<pair<int, int>> indexed;
        for (int i = 0; i < arr.size(); i++) {
            indexed.push_back({arr[i], i});
        }

        sort(indexed.begin(), indexed.end());
        vector<bool> visited(arr.size(), false);
        int swaps = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (visited[i] || indexed[i].second == i) {
                continue;
            }
            
            int cycleSize = 0;
            int j = i;

            while (!visited[j]) {
                visited[j] = true;
                j = indexed[j].second;
                cycleSize++;
            }
            
            if (cycleSize > 1) {
                swaps += (cycleSize - 1);
            }
        }
        return swaps;
    }


    /*
    only if the elements are continuous

    int swap_count(vector<int>& level) {
        int mini =in_element(level.begin(), level.end());
        int n = level.size(), swaps = 0;
        for(int i = 0; i < n; i++) {
            if(level[i] - mini != i) {
                int f = -1;
                for(int j = i + 1; j < n; j++) {
                    if(level[j] - mini == i) f = j;
                }
                swap(level[i], level[f]);
                swaps++;
            }
        }
        return swaps;
    }
    */


    int minimumOperations(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ans = 0;

        while (!q.empty()) {
            int n = q.size();
            vector<int> level;

            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();
                if(node->val != NULL) level.push_back(node->val);

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            
            ans += countSwaps(level);
        }
        return ans;
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}
    