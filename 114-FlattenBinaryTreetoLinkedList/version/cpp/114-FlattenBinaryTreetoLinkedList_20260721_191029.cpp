// Last updated: 7/21/2026, 7:10:29 PM
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
14        TreeNode*prev=NULL;
15    void flatten(TreeNode* root) {
16        if(root==NULL) return;
17        flatten(root->right);
18        flatten(root->left);
19        root->right=prev;
20        root->left=NULL;
21        prev=root;
22    }
23};