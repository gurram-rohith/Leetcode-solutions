// Last updated: 4/5/2026, 12:15:34 AM
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        vector<int>ans;
        int col=matrix[0].size();
        int  top=0,bottom=row-1,left=0,right=col-1,i,j;
        while(top<=bottom&&left<=right){
            for(i=left;i<=right;i++)
            {
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(j=top;j<=bottom;j++)
            {
                 ans.push_back(matrix[j][right]);
            }
            right--;
            if(top<=bottom)
            {for(i=right;i>=left;i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            if(left<=right)
           { for(j=bottom;j>=top;j--)
            {
                ans.push_back(matrix[j][left]);
            }
            left++;}
        }
        return ans;
    }
};