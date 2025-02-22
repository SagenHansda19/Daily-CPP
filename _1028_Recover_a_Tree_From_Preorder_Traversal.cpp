#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {} 
};

class Solution {
public:
    TreeNode* recoverFromPreorder(string traversal) {
        int dash = 0;
        vector<TreeNode*> stk;
        int i = 0, n = traversal.length();
        while(i < n) {
            dash = 0;
            while(i < n && traversal[i] == '-') {
                dash++;
                i++;
            }
            int j = i;
            while(j < n && traversal[j] != '-') j++;
            int val = stoi(traversal.substr(i, j - i));
            TreeNode* node = new TreeNode(val);
            while(stk.size() > dash) stk.pop_back();
            if(!stk.empty()) {
                if(!stk.back()->left) {
                    stk.back()->left = node;
                } else {
                    stk.back()->right = node;
                }
            }
            stk.push_back(node);
            i = j;
        }
        return stk[0];
    }
};

vector<int> levelOrder(TreeNode* root) {
    vector<int> res;
    if (!root) return res;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* cur = q.front();
        q.pop();
        res.push_back(cur->val);
        if(cur->left) q.push(cur->left);
        if(cur->right) q.push(cur->right);
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string s;
    cin >> s;
    TreeNode* ans = sol.recoverFromPreorder(s);
    vector<int> anss = levelOrder(ans);
    int n = anss.size();
    for(int i = 0; i < n; i++) {
        cout << anss[i] << " \n"[i == n - 1];
    }
    return 0;
}

