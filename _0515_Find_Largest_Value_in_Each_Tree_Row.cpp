#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
  int val;
  TreeNode left;
  TreeNode right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode left, TreeNode right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<int> ans;

        while(!q.empty()) {
            int n = q.size();
            vector<int> lvl;
            for(int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();
                lvl.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            int me = max_element(lvl.begin(), lvl.end());
            ans.push_back(me);
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	    
    return 0;
}
    