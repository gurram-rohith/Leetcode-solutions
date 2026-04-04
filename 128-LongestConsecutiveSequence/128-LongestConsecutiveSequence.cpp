// Last updated: 4/5/2026, 12:14:59 AM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        unordered_set<int>st;
        int longest=1;
        int count=1,prenum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        for(auto it:st)
        {
           if(st.find(it-1)==st.end())//we are counting only from the least value of a sequence
           {
            int cnt=1;
            int x=it;
            while(st.find(x+1)!=st.end())
            {
                cnt++;
                x+=1;
            }
            longest=max(longest,cnt);
           }
        }
        return longest;
    }
};