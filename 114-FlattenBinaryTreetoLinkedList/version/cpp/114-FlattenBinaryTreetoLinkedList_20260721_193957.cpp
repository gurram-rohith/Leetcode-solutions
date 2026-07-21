// Last updated: 7/21/2026, 7:39:57 PM
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
14    void flatten(TreeNode* root) {
15        TreeNode*curr=root,*prev;
16        while(curr!=NULL)
17        {
18            if(curr->left!=NULL)
19            {
20                prev=curr->left;
21                while(prev->right) prev=prev->right;
22                prev->right=curr->right;
23                curr->right=curr->left;
24                curr->left=NULL;
25            }
26            curr=curr->right;
27        }
28    }
29};