// Last updated: 4/5/2026, 12:13:54 AM
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>nge(nums.size(),-1);
        stack<int>st;
        int n=nums.size();
        int j=2*n-1;
        for(int i=j;i>=0;i--)
        {
           if(i>=n)
           {
            if(st.empty())
            st.push(nums[i%n]);
            else{
                while(!st.empty()&&st.top()<=nums[i%n])
                {
                    st.pop();
                }
                st.push(nums[i%n]);
            }
           }
           else{
                while(!st.empty()&&st.top()<=nums[i%n])
                {
                    st.pop();
                }
                if(!st.empty()&&st.top()>nums[i])
                nge[i]=st.top();
                st.push(nums[i%n]);
           } 
        }
        return nge;
    }
};