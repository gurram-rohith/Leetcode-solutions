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
            vector<pair<TreeNode*,ll>>vpp;
            while(!q.empty())
            {
                vpp.push_back(q.front());
                q.pop();
            }
            ll minind=INT_MAX,maxind=INT_MIN;
            for(int i=0;i<vpp.size();i++)
            {
                minind=min(minind,vpp[i].second);
                maxind=max(maxind,vpp[i].second);
            }
            maxwidth=max(maxwidth,maxind-minind+1);
            for(int i=0;i<vpp.size();i++)
            {
                if(vpp[i].first->left!=NULL) q.push({vpp[i].first->left,(vpp[i].second-minind)*2});
                if(vpp[i].first->right!=NULL) q.push({vpp[i].first->right,(vpp[i].second-minind)*2+1});

            }
        }
        return (int)maxwidth;
    }
};