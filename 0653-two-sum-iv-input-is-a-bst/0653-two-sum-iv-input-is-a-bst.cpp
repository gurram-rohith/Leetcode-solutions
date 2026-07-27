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
 class BSTIterator{
    stack<TreeNode*>s;
    bool reverse=true;
    public:
    BSTIterator(TreeNode*root,bool isreverse){
        reverse=isreverse;
        pushall(root);
    }
    int next(){
        TreeNode*t=s.top();
        s.pop();
        if(reverse)
        pushall(t->left);
        else pushall(t->right);
        return t->val;
    }
    private:
    void pushall(TreeNode*root){
        for(;root!=NULL;)
        {
            s.push(root);
            if(!reverse)
            root=root->left;
            else root=root->right;
        }
    }
 };
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        BSTIterator l(root,false);
        BSTIterator r(root,true);
        int i=l.next();
        int j=r.next();
        while(i<j)
        {
            if(i+j==k) return true;
            if(i+j<k) i=l.next();
            else j=r.next();
        }
        return false;

    }
};