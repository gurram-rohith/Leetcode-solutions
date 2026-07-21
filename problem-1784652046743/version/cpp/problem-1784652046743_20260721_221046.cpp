// Last updated: 7/21/2026, 10:10:46 PM
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
14    int ans=0;
15    int count(TreeNode*root)
16    {
17        int maxval=root->val;
18        if(!root->left&&!root->right)
19        {
20            ans++;
21            return root->val;
22        }
23        if(root->left)
24             maxval=max(maxval,count(root->left));
25        if(root->right)
26            maxval=max(maxval,count(root->right));
27        if(maxval==root->val) ans++;
28        return maxval;
29        
30        
31        
32        
33            
34    }
35    int countDominantNodes(TreeNode* root) {
36        count(root);
37        return ans;
38    }
39};