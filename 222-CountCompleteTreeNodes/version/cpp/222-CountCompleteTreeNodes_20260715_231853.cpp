// Last updated: 7/15/2026, 11:18:53 PM
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
14    int findlh(TreeNode*root)
15    {
16        if(root==NULL) return 0;
17        return 1+findlh(root->left);
18    }
19    int findrh(TreeNode*root)
20    {
21        if(root==NULL) return 0;
22        return 1+findrh(root->right);
23    }
24    int countNodes(TreeNode* root) {
25        int lefth=findlh(root);
26        int righth=findrh(root);
27        if(lefth==righth) return pow(2,lefth)-1;
28        return 1+countNodes(root->left)+countNodes(root->right);
29    }
30};