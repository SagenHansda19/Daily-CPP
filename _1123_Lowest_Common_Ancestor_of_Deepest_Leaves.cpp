#include <bits/stdc++.h>
using namespace std;

class Solution {
    int dpt(TreeNode* root) {
        if(!root) return 0;
        return 1 + max(dpt(root->left), dpt(root->right));
    }

    TreeNode* dfs(TreeNode* root, int mm, int l) {
        if(!root) return nullptr;
        if(mm - 1 == l) return root;
        TreeNode* left = dfs(root->left, mm, l + 1);
        TreeNode* right = dfs(root->right, mm, l + 1);
        if(left && right) return root;
        return left ? left : right;
    }
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        int mm = dpt(root);
        return dfs(root, mm, 0);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;    
    return 0;
}

