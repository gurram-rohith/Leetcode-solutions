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
    int findlh(TreeNode*root)
    {
        if(root==NULL) return 0;
        return 1+findlh(root->left);
    }
    int findrh(TreeNode*root)
    {
        if(root==NULL) return 0;
        return 1+findrh(root->right);
    }
    int countNodes(TreeNode* root) {
        int lefth=findlh(root);
        int righth=findrh(root);
        if(lefth==righth) return pow(2,lefth)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};