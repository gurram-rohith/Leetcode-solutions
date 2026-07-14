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
    using ll=long long;
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,ll>>q;
        q.push({root,1});
        ll maxwidth=1;
        while(!q.empty())
        {
            int s=q.size();
            ll minind=q.front().second;
            ll firstind,lastind;
            for(int i=0;i<s;i++)
            {
                ll curid=q.front().second-minind;
                TreeNode* t=q.front().first;
                q.pop();
                if(t->left) q.push({t->left,(curid)*2});
                if(t->right) q.push({t->right,(curid)*2+1});
                if(i==0) firstind=curid;
                if(i==s-1) lastind=curid;
            }
            maxwidth=max(maxwidth,lastind-firstind+1);

        }
        return (int)maxwidth;
    }
};