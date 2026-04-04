// Last updated: 4/5/2026, 12:15:08 AM
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
    vector<int>ans;
    vector<int>inorder(TreeNode*root){
        if(root==NULL)
        return {};
        else
        {inorder(root->left);
            ans.push_back(root->val);
        inorder(root->right);}

       return {};
    }
    vector<int> inorderTraversal(TreeNode* root) {
        
        inorder(root);
        return ans;
    }
};