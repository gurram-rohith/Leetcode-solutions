class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int maxele=*max_element(nums.begin(),nums.end());
        unordered_map<int,int>freq;
        vector<long long>divfreq(maxele+1,0);
        for(int i:nums) freq[i]++;
        for(int i=1;i<=maxele;i++)
        {
            int cnt=0;
            for(int j=i;j<=maxele;j+=i)
            {
                if(freq.find(j)!=freq.end())
                cnt+=freq[j];
            }
            divfreq[i]=cnt;
            // for finding the freq of element which are divisible by i
        }
        for(int i=1;i<=maxele;i++)
        {
            divfreq[i]=(divfreq[i]*(divfreq[i]-1))/2;
            // no of pairs whose gcd will be >=i
        }
        for(int i=maxele;i>=1;i--)
        {
            for(int j=2*i;j<=maxele;j+=i)
            divfreq[i]-=divfreq[j]; 
            // removing the gcd values which are greater than i
        }

        // to identify the element which index the query asks for 
        for(int i=1;i<=maxele;i++) divfreq[i]+=divfreq[i-1];
        vector<int>ans;
        for(long long q:queries)
        {
            q++;
            int pos=lower_bound(divfreq.begin(),divfreq.end(),q)-divfreq.begin();
            ans.push_back(pos);
        }
        return ans;



        

    }
};