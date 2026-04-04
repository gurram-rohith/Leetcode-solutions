// Last updated: 4/5/2026, 12:16:05 AM
class Solution {
public:
    string intToRoman(int num) {
        string ans="";
        int v=5,x=10,l=50,c=100,d=500,m=1000;
        int sum=0;
        // return ans;
        int digits=0;
        if(num/1000!=0) digits=3;
        else if(num/100!=0) digits=2;
        else if(num/10!=0) digits=1;
        else
        digits=0;
        int temp=pow(10,digits);
        cout<<temp<<endl;
        while(num>0){
            if((num/temp)==4)
            {
                if(((num/temp)*temp)/100>=1)
                {ans.push_back('C');
                    ans.push_back('D');
                }
                else if(((num/temp)*temp)/10>=1)
                { ans.push_back('X');
                    ans.push_back('L');
               }
                 else 
                {ans.push_back('I');
                    ans.push_back('V');
                }
            }
            else if(num/temp==9)
            {
                if(((num/temp)*temp)/100>=1)
                {ans.push_back('C');
                    ans.push_back('M');
                }
                else if(((num/temp)*temp)/10>=1)
                {ans.push_back('X');
                    ans.push_back('C');
                }
                 else 
                {ans.push_back('I');
                    ans.push_back('X');
                }
            }
            else{
                sum=(num/temp)*temp;
                while(sum>0){
                    if(sum/1000>=1)
                    {
                        ans.push_back('M');
                        sum-=1000;
                    }
                    else if(sum/500>=1)
                    {
                        ans.push_back('D');
                        sum-=500;
                    }
                    else if(sum/100>=1)
                    {
                        ans.push_back('C');
                        sum-=100;
                    }
                    else if(sum/50>=1)
                    {ans.push_back('L');
                    sum-=50;}
                    else if(sum/10>=1)
                    {
                        ans.push_back('X');
                        sum-=10;
                    }
                    else if(sum/5>=1)
                    {
                        ans.push_back('V');
                        sum-=5;
                    }
                    else if(sum/1>=1)
                    {
                        ans.push_back('I');
                        sum-=1;
                    }
                }
            }
            num%=temp;
            temp/=10;
        }
return ans;
    }
};