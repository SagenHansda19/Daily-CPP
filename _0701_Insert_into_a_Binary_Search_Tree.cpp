#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void insert(TreeNode* root, int val) {
        if(val < root->val && !root->left) {
            root->left = new TreeNode(val);
            return;
        }
        if(val > root->val && !root->right) {
            root->right = new TreeNode(val);
            return;
        }
        val < root->val ? insert(root->left, val) : insert(root->right, val);
    }
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root) return new TreeNode(val);
        insert(root, val);
        return root;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}

