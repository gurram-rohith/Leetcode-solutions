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
    bool findTarget(TreeNode* root, int k) {
        vector<int>inorder;
        TreeNode*curr=root;
        while(curr)
        {
            if(curr->left==NULL)
            {
                inorder.push_back(curr->val);
                curr=curr->right;
            }
            else
            {
                TreeNode*prev=curr->left;
                while(prev->right&&prev->right!=curr) prev=prev->right;
                if(prev->right==NULL)
                prev->right=curr,curr=curr->left;
                else {
                    prev->right=NULL;
                    inorder.push_back(curr->val);
                    curr=curr->right;
                }
            }
        }
        unordered_map<int,int>mpp;
        for(int i=0;i<inorder.size();i++)
        {
            if(mpp.find(k-inorder[i])!=mpp.end()) return true;
            mpp[inorder[i]]++;
        }
        return false;
    }
};