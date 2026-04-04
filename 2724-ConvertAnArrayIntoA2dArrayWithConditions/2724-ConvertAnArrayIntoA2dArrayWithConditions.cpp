// Last updated: 4/5/2026, 12:12:34 AM
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>twodarr;
        map<int,int>mp;
         for(int i=0;i<nums.size();i++)
        {
           mp[nums[i]]++;
        }
        while(mp.empty()!=1){
           vector<int>temp;
           for(auto it=mp.begin();it!=mp.end();){
            if(it->second==1)
            {
                temp.push_back(it->first);
                it=mp.erase(it);
            }
            else if(it->second>1){
                temp.push_back(it->first);
                it->second-=1;
                ++it;
            }
            else
            ++it;
           }
           twodarr.push_back(temp);
        }
        return twodarr;

    }
};