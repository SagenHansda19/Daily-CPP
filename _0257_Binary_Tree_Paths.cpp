#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
private:
    vector<string> ans;
    void dfs(TreeNode* cur, string s) {
        if(!cur) return;
        if(!s.empty()) s += "->";
        s += to_string(cur->val);
        if(!cur->left && !cur->right) {
            ans.push_back(s);
            return;
        }
        dfs(cur->left, s);
        dfs(cur->right, s);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root, "");
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      
    return 0;
}

