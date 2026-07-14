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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
      queue<TreeNode*>q;
      q.push(root);
      unordered_map<TreeNode*,TreeNode*>mpp;
      unordered_map<TreeNode*,bool>visited;
      vector<int>ans;
      while(!q.empty())
      {
        TreeNode*t=q.front();
        q.pop();
        if(t->left)
        mpp[t->left]=t,q.push(t->left);
        if(t->right)
        mpp[t->right]=t,q.push(t->right);
      }
      mpp[root]=NULL;  
      visited[target]=true;
      q.push(target);
      int curlevel=0;
      while(!q.empty())
      {
        int s=q.size();
        if(curlevel++==k) break;
        for(int i=0;i<s;i++)
        {
            TreeNode*p=q.front();
            q.pop();
            if(mpp[p]&&!visited[mpp[p]])
            q.push(mpp[p]),visited[mpp[p]]=true;
            if(p->left&&!visited[p->left])
            q.push(p->left),visited[p->left]=true;
            if(p->right&&!visited[p->right])
            q.push(p->right),visited[p->right]=true;
            
        }
      }
      while(!q.empty())
      ans.push_back(q.front()->val),q.pop();
      return ans;
      
    }
};