// Last updated: 7/16/2026, 8:18:33 PM
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
14     unordered_map<int,int>pos;
15     int preindex=0;
16    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int l,int r)
17    {
18        
19        if(l>r) return NULL;
20        int val = preorder[preindex++];
21        TreeNode* root = new TreeNode(val);
22        int idx=pos[val];
23        root->left=build(preorder,inorder,l,idx-1);
24        root->right=build(preorder,inorder,idx+1,r);
25        return root;
26
27
28    } 
29    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
30       for(int i=0;i<inorder.size();i++)
31       {
32        pos[inorder[i]]=i;
33       }
34       return build(preorder,inorder,0,preorder.size()-1);
35
36    }
37};