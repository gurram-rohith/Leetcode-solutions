// Last updated: 4/5/2026, 12:16:03 AM
class Solution {
public:
    int romanToInt(string s) {int add=0;
        for(int i=0;s[i]!='\0';++i)
        {
            if(s[i]=='I'&&(s[i+1]=='V'))
            {add+=4;
            ++i;}
            else if(s[i]=='I'&&s[i+1]=='X')
           { add+=9;
            ++i;}
            else if(s[i]=='I'&&(s[i+1]!='V'||s[i+1]!='X'))
            add+=1;
            else if(s[i]=='X'&&(s[i+1]=='L'))
           { add+=40;
            ++i;}
            else if(s[i]=='X'&&s[i+1]=='C')
            {add+=90;
            ++i;}
            else if(s[i]=='X'&&(s[i+1]!='L'||s[i+1]!='C'))
            add+=10;
            else if(s[i]=='C'&&(s[i+1]=='D'))
           { add+=400;
            ++i;}
            else if(s[i]=='C'&&(s[i+1]=='M'))
            {
                add+=900;
            ++i;}
            else if(s[i]=='C'&&(s[i+1]!='D'||s[i+1]!='M'))
            add+=100;
           else if(s[i]=='L')
            add+=50;
            else if(s[i]=='V')
            add+=5;  
            else if(s[i]=='M')
            add+=1000; 
            else if(s[i]=='D')
            add+=500;   
        }
         return add;  
    }
};