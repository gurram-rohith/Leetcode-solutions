// Last updated: 4/5/2026, 12:15:26 AM
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int i=digits.size()-1;
    if(digits[i]!=9)
   { digits[i]+=1;
    return digits;}
    
   for(i=digits.size()-1;i>=0;i--)
   {if(i==0&&digits[i]==9)
    {
      digits[i]=0;
      digits.insert(digits.begin(),1);
      break;
    }
   if(digits[i]==9&&i==0)
    {  digits.insert(digits.begin(),1);
    digits[i]=0;
    }
    if(digits[i]==9&&digits[i-1]!=9)
    {
        digits[i]=0;
        digits[i-1]+=1;
        break;
    }
    if(digits[i]==9&&i!=0)
    digits[i]=0;
   }
return digits;
    }
};