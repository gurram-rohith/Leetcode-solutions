// Last updated: 4/5/2026, 12:12:25 AM
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int len=dimensions.size();
        double lendiag=-1;
        double maxdiag=INT_MIN;
        int index=-1;
        for(int i=0;i<len;i++)
        {
             lendiag=sqrt(dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1]);
        
            if(maxdiag==lendiag&&index==-1){
                maxdiag=lendiag;
                index=i;
            }
            else if(maxdiag==lendiag&&index!=-1){
                if((dimensions[index][0]*dimensions[index][1])<(dimensions[i][0]*dimensions[i][1]))
                {
                index=i;
            }
            }
            else if(maxdiag<lendiag){
                maxdiag=lendiag;
                index=i;
            }
                        
        }
        
        return dimensions[index][0]*dimensions[index][1];
    }
};