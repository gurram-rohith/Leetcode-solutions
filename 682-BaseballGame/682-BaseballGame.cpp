// Last updated: 4/5/2026, 12:13:45 AM
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>result;
        int sum=0,num;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]!="C"&&operations[i]!="D"&&operations[i]!="+")
            {   num=std::stoi(operations[i]);;
                sum+=num;
                result.push_back(num);
            }
            else if(operations[i]=="C"){
                sum-=result[result.size()-1];
                result.pop_back();
            }
            else if(operations[i]=="D"){
                num=2*result[result.size()-1];
                sum+=num;
                result.push_back(num);
            }
            else
            {num=result[result.size()-1]+result[result.size()-2];
            sum+=num;
                result.push_back(num);
            }
        }
        return sum;
    }
};