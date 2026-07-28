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
    TreeNode*prev,*first,*second;
    
    void recoverTree(TreeNode* root) {
        prev=NULL;
        first=NULL,second=NULL;
        TreeNode*curr=root;
        while(curr)
        {
            if(curr->left==NULL)
            {
                  if(prev&&prev->val>curr->val)
                   {
                    if(first==NULL) first=prev;
                    second=curr;
                   }
                prev=curr;
                    curr=curr->right;
            }
            else{

                TreeNode*p=curr->left;
                while(p->right&&p->right!=curr) p=p->right;
                if(p->right==NULL)
                {
                    p->right=curr;
                    curr=curr->left;
                    
                }
                else
                {
                    p->right=NULL;
                   if(prev&&prev->val>curr->val)
                   {
                    if(first==NULL) first=prev;
                    second=curr;
                   }
                   prev=curr;
                    curr=curr->right;
                }
            }
           
        }
        int temp=first->val;
        first->val=second->val;
        second->val=temp;
    }
};