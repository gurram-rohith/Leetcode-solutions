// Last updated: 4/5/2026, 12:13:12 AM
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0,maxsum=0,rightindex;
        for(int i=0;i<k;i++)
        lsum+=cardPoints[i];
        maxsum=lsum;
        rightindex=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--)
        {
            lsum-=cardPoints[i];
            rsum+=cardPoints[rightindex];
            rightindex--;
            maxsum=max(maxsum,lsum+rsum);
        }
        return maxsum;

    }
};