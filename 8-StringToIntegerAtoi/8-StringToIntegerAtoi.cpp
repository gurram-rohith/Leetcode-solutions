// Last updated: 4/5/2026, 12:16:08 AM
class Solution {
public:
    int myAtoi(string s) {
        queue<char>q;
        int pos=0;
        long long ans=0;
        for(int i=0;i<s.size();i++){
            
            if(q.empty())
            {   if(s[i]==' ')
                continue;
                if(s[i]=='-')
               { pos=-1;
                i++;}
                else if(s[i]=='+')
                i++;
            }
            
            if(s[i]-'0'>=0&&s[i]-'0'<=9)
            q.push(s[i]);
            else
            {  
                 break;
            }
            
           
        }
        while(!q.empty())
        {  if(q.front()==0&&ans==0) continue;
           if(ans>=INT_MAX+1LL&&pos==-1)
        {
            return INT_MIN;}
             if(ans>INT_MAX&&pos==0)
            return INT_MAX;
           ans=ans*10+(q.front()-'0');
          q.pop();
        }
        cout<<ans<<endl;
        if(pos==-1)
        { 
              if(ans>=INT_MAX+1LL)
        {
            return INT_MIN;}
            return ans*(-1);
        }
        else
        {
            if(ans>INT_MAX)
            return INT_MAX;
            return ans;
        }
    }
};