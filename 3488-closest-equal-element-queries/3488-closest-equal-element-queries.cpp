class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        vector<int>ans;
        int n=nums.size();
        unordered_map<int,vector<int>>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]].push_back(i);
        }
        for(int i=0;i<queries.size();i++)
        {
            int index=queries[i];
            int val=nums[queries[i]];
            if(mpp[val].size()==1) 
            ans.push_back(-1);
            else
            {
                vector<int>&vec=mpp[val];
                int minans=INT_MAX;
               int fg=upper_bound(vec.begin(),vec.end(),index)-vec.begin();

               int lg=vec.size()-1;
               if(vec[lg]==index) lg=-1;

               int ls=lower_bound(vec.begin(),vec.end(),index)-vec.begin()-1;
               
               int fs=0;
               if(index==vec[fs]) fs=-1;
               if(fg>=0&&fg<=vec.size()-1)
               {
                int d=abs(index-vec[fg]);
                minans=min({minans,d,n-d});
               }

               if(lg>=0&&lg<=vec.size()-1)
               {
                int d=abs(index-vec[lg]);
                minans=min({minans,d,n-d});
               }

               if(fs>=0&&fs<=vec.size()-1)
               {
                int d=abs(index-vec[fs]);
                minans=min({minans,d,n-d});
               }

               if(ls>=0&&ls<=vec.size()-1)
               {
                int d=abs(index-vec[ls]);
                minans=min({minans,d,n-d});
               }
               ans.push_back(minans);
            }
        }
        return ans;
    }
};