// Last updated: 7/23/2026, 10:21:23 PM
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
14    TreeNode* insertinto(TreeNode*root,int val)
15    {
16        TreeNode*temp=new TreeNode(val);
17        if(root==NULL) {
18            return temp;
19        }
20        if(root->val<val)
21        root->right=insertinto(root->right,val);
22        else 
23        root->left=insertinto(root->left,val);
24        return root;
25    }
26    TreeNode* insertIntoBST(TreeNode* root, int val) {
27        return insertinto(root,val);
28
29
30    }
31};