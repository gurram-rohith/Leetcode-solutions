// Last updated: 7/16/2026, 8:26:38 PM
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
14 unordered_map<int,int>pos;
15     int preindex;
16    TreeNode* build(vector<int>& postorder, vector<int>& inorder,int l,int r)
17    {
18        
19        if(l>r) return NULL;
20        int val = postorder[--preindex];
21        TreeNode* root = new TreeNode(val);
22        int idx=pos[val];
23        root->right=build(postorder,inorder,idx+1,r);
24        root->left=build(postorder,inorder,l,idx-1);
25        return root;
26
27
28    } 
29    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
30        preindex=inorder.size();
31        for(int i=0;i<inorder.size();i++)
32       {
33        pos[inorder[i]]=i;
34       }
35       return build(postorder,inorder,0,postorder.size()-1);
36    }
37};