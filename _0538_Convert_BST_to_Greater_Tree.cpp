#include <bits/stdc++.h>
using namespace std;

class Solution {
    void trav(TreeNode* root, int& cur) {
        if(!root) return;
        trav(root->right, cur);
        root->val += cur;
        cur = root->val;
        trav(root->left, cur);
    }
public:
    TreeNode* convertBST(TreeNode* root) {
        int cur = 0;
        trav(root, cur);
        return root;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}

