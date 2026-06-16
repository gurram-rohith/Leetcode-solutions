// Last updated: 6/16/2026, 11:13:27 AM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    int maxheight(TreeNode*root)
15    {
16        if(root==NULL) return 0;
17        return 1+max(maxheight(root->left),maxheight(root->right));
18    }
19    int maxDepth(TreeNode* root) {
20        return maxheight(root);
21    }
22};