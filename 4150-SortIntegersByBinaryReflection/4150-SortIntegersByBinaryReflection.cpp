// Last updated: 4/5/2026, 12:11:14 AM
class Solution {
public:
    int reversenum(int n)
    {
        long long ans=0,p=0;
        vector<int>digits;
        while(n>0)
            {
                digits.push_back(n%2);
                n/=2;
            }
        for(int i=digits.size()-1;i>=0;i--)
            {
                ans+=pow(2,p)*digits[i];
                p++;
            }
        return ans;
    }
    vector<int> sortByReflection(vector<int>& nums) {
        vector<pair<int,int>>vpp;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
            {
                vpp.push_back({reversenum(nums[i]),nums[i]});
            }
        sort(vpp.begin(),vpp.end());
        vector<int>ans;
        for(int i=0;i<vpp.size();i++)
            ans.push_back(vpp[i].second);
        return ans;
            
    }
};
