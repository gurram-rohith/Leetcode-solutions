// Last updated: 4/5/2026, 12:15:52 AM
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size()) return -1;
        map<int,int>firstChar;
        int k=0,length=0;
        int count=0;
        for(int i=0;i<haystack.size();i++)
        {
            if(haystack[i]==needle[0])
            {
            count++;
            firstChar[count]=i;
            }
        }
        for(auto&pair:firstChar)
        {k=0,length=0;
            for(int j=pair.second;j<haystack.size();j++)
            { if(k>needle.size()-1) break;
                if(needle[k]==haystack[j])
                {
                    length++;
                k++;
                }
                else if(needle[k]!=haystack[j])
                {
                    pair.second=-1;
                    break;
                }
            }
            if(length!=needle.size())
            pair.second=-1;
        }
        for( auto&pair:firstChar){
            if(pair.second!=-1)
            return pair.second;
        }
        return -1;
    }
};