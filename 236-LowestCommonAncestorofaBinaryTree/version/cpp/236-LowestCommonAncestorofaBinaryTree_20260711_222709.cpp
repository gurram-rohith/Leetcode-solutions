// Last updated: 7/11/2026, 10:27:09 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11public:
12    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
13        if(root==NULL||root==p||root==q) return root;
14        TreeNode*l= lowestCommonAncestor(root->left,p,q);
15        TreeNode*r=lowestCommonAncestor(root->right,p,q);
16        if(l==NULL) return r;
17        else if(r==NULL) return l;
18        return root;
19    }
20};