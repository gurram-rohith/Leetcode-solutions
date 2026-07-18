// Last updated: 7/18/2026, 12:35:12 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Codec {
11public:
12
13    // Encodes a tree to a single string.
14    string serialize(TreeNode* root) {
15        if(root==NULL) return "";
16        queue<TreeNode*>q;
17        q.push(root);
18        string ans;
19        while(!q.empty())
20        {
21           TreeNode*p=q.front();
22           q.pop();
23           if(p==NULL)
24           ans+=("#,");
25           else
26           {
27            ans+=to_string(p->val);
28            ans+=',';
29            q.push(p->left);
30            q.push(p->right);
31           }
32        }
33        return ans;
34    }
35
36    // Decodes your encoded data to tree.
37    TreeNode* deserialize(string data) {
38        if(data.size()==0) return NULL;
39        stringstream s(data);
40        string str;
41        getline(s,str,',');
42        TreeNode*root=new TreeNode(stoi(str));
43        queue<TreeNode*>q;
44        q.push(root);
45        while(!q.empty())
46        {
47            TreeNode*p=q.front();
48            q.pop();
49            getline(s,str,',');
50            if(str=="#")
51            p->left=NULL;
52            else{
53                TreeNode*n=new TreeNode(stoi(str));
54                p->left=n;
55                q.push(p->left);
56            }
57            getline(s,str,',');
58            if(str=="#")
59            p->right=NULL;
60            else{
61                TreeNode*n=new TreeNode(stoi(str));
62                p->right=n;
63                q.push(p->right);
64            }
65
66        }
67        return root;
68    }
69};
70
71// Your Codec object will be instantiated and called as such:
72// Codec ser, deser;
73// TreeNode* ans = deser.deserialize(ser.serialize(root));