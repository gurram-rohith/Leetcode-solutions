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
     int preindex=0;
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int l,int r)
    {
        
        if(l>r) return NULL;
        int val = preorder[preindex++];
        TreeNode* root = new TreeNode(val);
        int idx=pos[val];
        root->left=build(preorder,inorder,l,idx-1);
        root->right=build(preorder,inorder,idx+1,r);
        return root;


    } 
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int>inorder=preorder;
        sort(inorder.begin(),inorder.end());
        for(int i=0;i<inorder.size();i++)
       {
        pos[inorder[i]]=i;
       }
       return build(preorder,inorder,0,preorder.size()-1);

    }
};