// Last updated: 7/27/2026, 12:21:08 AM
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
14        int i=0;
15    TreeNode* constructbst(vector<int>&preorder,int &i,int upperb)
16    {
17        if(i==preorder.size()||preorder[i]>upperb) return NULL;
18        TreeNode*root=new TreeNode(preorder[i++]);
19        root->left=constructbst(preorder,i,root->val);
20        root->right=constructbst(preorder,i,upperb);
21        return root;
22    }
23    TreeNode* bstFromPreorder(vector<int>& preorder) {
24        return constructbst(preorder,i,INT_MAX);
25        
26    }
27};