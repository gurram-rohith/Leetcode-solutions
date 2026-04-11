class Solution {
public:
    int minimumDistance(vector<int>& nums) {
          int mindist=INT_MAX;
        vector<vector<int>>vec(1e5+1);
        for(int i=0;i<nums.size();i++)
        {
            vec[nums[i]].push_back(i);
        }
        for(int m=1;m<=1e5;m++)
        {
            if(vec[m].size()<=2)  continue;
            int i=0,j=1,k=2;
            while(k<vec[m].size())
            {
                mindist=min(mindist,abs(vec[m][i]-vec[m][j])+abs(vec[m][j]-vec[m][k])+abs(vec[m][k]-vec[m][i]));
                i=j;
                j=k;
                k++;
            }
        }
        if(mindist==INT_MAX) return -1;
        return mindist;
    }
};