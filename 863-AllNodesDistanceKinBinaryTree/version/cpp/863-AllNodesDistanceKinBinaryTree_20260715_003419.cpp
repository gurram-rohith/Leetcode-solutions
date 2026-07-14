// Last updated: 7/15/2026, 12:34:19 AM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11public:
12    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
13      queue<TreeNode*>q;
14      q.push(root);
15      unordered_map<TreeNode*,TreeNode*>mpp;
16      unordered_map<TreeNode*,bool>visited;
17      vector<int>ans;
18      while(!q.empty())
19      {
20        TreeNode*t=q.front();
21        q.pop();
22        if(t->left)
23        mpp[t->left]=t,q.push(t->left);
24        if(t->right)
25        mpp[t->right]=t,q.push(t->right);
26      }
27      mpp[root]=NULL;  
28      visited[target]=true;
29      q.push(target);
30      int curlevel=0;
31      while(!q.empty())
32      {
33        int s=q.size();
34        if(curlevel++==k) break;
35        for(int i=0;i<s;i++)
36        {
37            TreeNode*p=q.front();
38            q.pop();
39            if(mpp[p]&&!visited[mpp[p]])
40            q.push(mpp[p]),visited[mpp[p]]=true;
41            if(p->left&&!visited[p->left])
42            q.push(p->left),visited[p->left]=true;
43            if(p->right&&!visited[p->right])
44            q.push(p->right),visited[p->right]=true;
45            
46        }
47      }
48      while(!q.empty())
49      ans.push_back(q.front()->val),q.pop();
50      return ans;
51      
52    }
53};