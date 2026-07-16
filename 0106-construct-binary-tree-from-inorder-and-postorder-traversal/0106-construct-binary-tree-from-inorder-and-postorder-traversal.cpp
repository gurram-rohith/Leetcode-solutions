/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
 unordered_map<int,int>pos;
     int preindex;
    TreeNode* build(vector<int>& postorder, vector<int>& inorder,int l,int r)
    {
        
        if(l>r) return NULL;
        int val = postorder[--preindex];
        TreeNode* root = new TreeNode(val);
        int idx=pos[val];
        root->right=build(postorder,inorder,idx+1,r);
        root->left=build(postorder,inorder,l,idx-1);
        return root;


    } 
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        preindex=inorder.size();
        for(int i=0;i<inorder.size();i++)
       {
        pos[inorder[i]]=i;
       }
       return build(postorder,inorder,0,postorder.size()-1);
    }
};