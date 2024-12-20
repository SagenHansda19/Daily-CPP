#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
 	TreeNode *left;
 	TreeNode *right;
 	TreeNode() : val(0), left(nullptr), right(nullptr) {}
 	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(!root) return root;

        int lvl = 0;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            int n = q.size();
            vector<TreeNode*> on;
            for(int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();
                on.push_back(node);

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }

            if(lvl % 2 == 1) {
                int l = 0, r = on.size() - 1;
                while(l < r) {
                    swap(on[l]->val, on[r]->val);
                    l++; r--;
                }
            }

            lvl++;
        }
        return root;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    TreeNode* head = NULL;
    TreeNode
    return 0;
}
    