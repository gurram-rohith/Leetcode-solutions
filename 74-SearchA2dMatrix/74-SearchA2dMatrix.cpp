// Last updated: 4/5/2026, 12:15:19 AM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0,high=matrix.size()-1,mid;
        int rowele=matrix[0].size();
        int ansrow=-1;
       
        while(low<=high)
        {
          mid=low+(high-low)/2;
          if((matrix[mid][rowele-1]==target||matrix[mid][0]==target)||(matrix[mid][0]<target&&matrix[mid][rowele-1]>target))
          {
            ansrow=mid;
            break;
          }
          else if(matrix[mid][rowele-1]>target)
          high=mid-1;
          else if(matrix[mid][rowele-1]<target)
          low=mid+1;
        }
        if(ansrow==-1) return false;
        for(int i=0;i<rowele;i++){
            if(matrix[ansrow][i]==target)
            return true;
        }
        return false;
        }
    };