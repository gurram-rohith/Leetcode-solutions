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
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        stack<TreeNode*>s;
        s.push(root);
        vector<int>ans;
        while(!s.empty())
        {
            TreeNode*p=s.top();
            s.pop();
            if(p->right) s.push(p->right);
            if(p->left) s.push(p->left);
            ans.push_back(p->val);
        }
        return ans;
    }
};