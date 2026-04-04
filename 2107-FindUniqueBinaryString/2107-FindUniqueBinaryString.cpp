// Last updated: 4/5/2026, 12:12:52 AM
class Solution {
public:
    string GenString(int n,int len)
    {
        string s;
        for(int j=len-1;j>=0;j--)
        {
            if((n>>j)&1)
            s+='1';
            else s+='0';
        }
        return s;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        map<int,string>mpp;
        for(int i=0;i<nums.size();i++)
        {
            int n=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i][j]=='1')
                n+=(1<<(nums.size()-1-j));
            }
            mpp[n]=nums[i];
        }
        int n=0;
        int f=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.find(n)==mpp.end())
            {
                f=n;
                break;
            }
            else n++;
        }
        if(f==-1)
        {
            auto lastele=prev(mpp.end());
            return GenString(lastele->first+1,nums.size());
        }
        else
        {
            return GenString(f,nums.size());
        }
        
    }
};