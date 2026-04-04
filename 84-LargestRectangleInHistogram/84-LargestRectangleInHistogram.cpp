// Last updated: 4/5/2026, 12:15:11 AM
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int maxans=-1,nse,pse,ele;
        for(int i=0;i<heights.size();i++)
        {
            while(!st.empty()&&heights[st.top()]>heights[i])
            {
                nse=i;
                ele=st.top();
                st.pop();
                pse=st.empty()?-1:st.top();
                maxans=max(maxans,(nse-pse-1)*heights[ele]);
            }
           st.push(i);
        }
        while(!st.empty())
        {
            nse=heights.size();
            ele=st.top();
            st.pop();
            pse=st.empty()?-1:st.top();
            maxans=max(maxans,(nse-pse-1)*heights[ele]);
        }
        return maxans;
    }
};