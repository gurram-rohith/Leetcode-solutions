// Last updated: 4/5/2026, 12:10:49 AM
class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        bool fp=true;
        int fscore=0,sscore=0;
        for(int i=0;i<nums.size();i++)
            {
                if((nums[i]%2!=0)&&((i+1)%6!=0))
                {
                    fp=!fp;
                }
                else if((i+1)%6==0&&nums[i]%2==0)
                {
                    fp=!fp;
                }
                if(fp)
                    fscore+=nums[i];
                else sscore+=nums[i];
            }
        return fscore-sscore;
    }
};