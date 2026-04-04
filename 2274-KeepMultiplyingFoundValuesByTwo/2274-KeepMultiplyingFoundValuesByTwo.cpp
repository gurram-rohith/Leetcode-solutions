// Last updated: 4/5/2026, 12:12:44 AM
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        long long temp=0,f=0;
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
             if(nums[i]==original)f=1;
             mpp[nums[i]]++;
        }
        if(f==0)
        return original;
        else{
            temp=2*original;
           for(auto it=mpp.begin();it!=mpp.end();++it)
           {
                if(mpp.find(temp)==mpp.end())
                {
                    return temp;
                }
                else
                temp*=2;
           }
        }
        return temp;
    }
};