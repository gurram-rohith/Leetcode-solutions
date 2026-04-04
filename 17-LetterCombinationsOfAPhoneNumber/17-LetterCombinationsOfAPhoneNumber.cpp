// Last updated: 4/5/2026, 12:16:00 AM
class Solution {
public:
    void genString(string temp,vector<string>&ans,map<char,string>&hashmap,string &digits,int i)
    {
        if(i==digits.size())
        {
            ans.push_back(temp);
            return;
        }
        string letters=hashmap[digits[i]];
        for(char l:letters)
        genString(temp+l,ans,hashmap,digits,i+1);

        

    }
    vector<string> letterCombinations(string digits) {
        map<char,string>hashmap;
        hashmap['2']={'a','b','c'};
        hashmap['3']={'d','e','f'};
        hashmap['4']={'g','h','i'};
        hashmap['5']={'j','k','l'};
        hashmap['6']={'m','n','o'};
        hashmap['7']={'p','q','r','s'};
        hashmap['8']={'t','u','v'};
        hashmap['9']={'w','x','y','z'};
        string temp;
        vector<string>ans;
        genString(temp,ans,hashmap,digits,0);
        return ans;
    }
};