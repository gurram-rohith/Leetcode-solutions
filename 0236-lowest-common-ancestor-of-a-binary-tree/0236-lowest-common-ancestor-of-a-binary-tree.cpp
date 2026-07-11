/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void traverse(TreeNode*root,map<TreeNode*,TreeNode*>&parent)
    {
        if(root==NULL) return;
        if(root->left!=NULL)
        parent[root->left]=root;
        if(root->right!=NULL) parent[root->right]=root;
        traverse(root->left,parent);
        traverse(root->right,parent);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        map<TreeNode*,TreeNode*>parent;
        parent[root]=NULL;
        traverse(root,parent);
        vector<TreeNode*>f,s;
        TreeNode*tempp=p,*tempq=q;
        while(parent[p]!=NULL)
        f.push_back(p),p=parent[p];
        while(parent[q]!=NULL)
        s.push_back(q),q=parent[q];
        reverse(f.begin(),f.end());
        reverse(s.begin(),s.end());
        unordered_set<TreeNode*>st;
        while(tempp!=NULL)
        {
            st.insert(tempp);
            tempp=parent[tempp];
        }
        while(tempq!=NULL)
        {
            if(st.count(tempq)) return tempq;
            tempq=parent[tempq];
        }
        return p;

        

    }
};