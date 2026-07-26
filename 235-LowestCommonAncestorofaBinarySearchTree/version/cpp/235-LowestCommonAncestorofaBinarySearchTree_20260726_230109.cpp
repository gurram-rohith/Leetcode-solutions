// Last updated: 7/26/2026, 11:01:09 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10
11class Solution {
12public:
13    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
14        
15        if(root->val>p->val&&root->val>q->val) return lowestCommonAncestor(root->left,p,q);
16        if(root->val<p->val&&root->val<q->val) return lowestCommonAncestor(root->right,p,q);
17        return root;
18    }
19};