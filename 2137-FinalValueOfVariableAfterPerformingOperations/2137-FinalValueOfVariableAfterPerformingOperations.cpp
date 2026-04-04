// Last updated: 4/5/2026, 12:12:49 AM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int pos=0,neg=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="X++"||operations[i]=="++X")
            pos++;
            else
            neg++;
        }
        if(pos>neg)
        return pos-neg;
        else
        return (neg-pos)*-1;
    }
};