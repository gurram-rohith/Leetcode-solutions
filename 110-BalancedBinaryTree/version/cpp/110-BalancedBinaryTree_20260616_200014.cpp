// Last updated: 6/16/2026, 8:00:14 PM
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
14    int h(TreeNode*root,bool &f)
15    {
16        if(!f) return 0;
17        if(root==NULL) return 0;
18        int l=0,r=0;
19        if(root->left!=NULL)
20        l=1+h(root->left,f);
21        if(root->right!=NULL) 
22        r=1+h(root->right,f);
23        if(abs(l-r)>1) 
24        {
25            f=0;
26            return 0;
27        }
28        else return max(l,r);
29    }
30    bool isBalanced(TreeNode* root) {
31        bool f=true;
32        h(root,f);
33        return f;
34    }
35};