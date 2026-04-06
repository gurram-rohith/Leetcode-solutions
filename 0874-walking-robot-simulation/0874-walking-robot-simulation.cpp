class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        bool n=true,e=false,w=false,s=false;
        int maxans=0;
        int x=0,y=0;
        map<pair<int,int>,int>mpp;
        for(int i=0;i<obstacles.size();i++)
        {
            mpp[{obstacles[i][0],obstacles[i][1]}]=1;
        }
        for(int i=0;i<commands.size();i++)
        {
            if(commands[i]==-1)
            {
                if(n==true) n=0,e=true;
                else if(s==true) s=0,w=true;
                else if(e==true) e=0,s=true;
                else if(w==true) w=0,n=true;
                continue;
            }
            else if(commands[i]==-2)
            {
               if(n==true) n=0,w=true;
                else if(s==true) s=0,e=true;
                else if(e==true) e=0,n=true;
                else if(w==true) w=0,s=true;
                continue; 
            }
            int tempx=x,tempy=y;
            if(n)
            tempy+=commands[i];
            else if(w)
            tempx-=commands[i];
            else if(s)
            tempy-=commands[i];
            else 
            tempx+=commands[i];
            if(x==tempx)
            {
                if(tempy<=y)
                {
                    for(int k=y-1;k>=tempy;k--)
                    {
                        if(mpp.find({x,k})!=mpp.end())
                        {
                        tempy=k+1;
                        break;
                        }
                    }

                }
                else
                {
                    for(int k=1+y;k<=tempy;k++)
                    {
                    if(mpp.find({x,k})!=mpp.end())
                    {
                        tempy=k-1;
                        break;
                    }
                    }
                }
            }
            else
            {
                if(tempx>x)
                {for(int k=1+x;k<=tempx;k++)
                {
                    if(mpp.find({k,y})!=mpp.end())
                    {
                        tempx=k-1;
                        break;
                    }
                }}
                else
                {
                    for(int k=x-1;k>=tempx;k--)
                    {
                        if(mpp.find({k,y})!=mpp.end())
                        {
                        tempx=k+1;
                        break;
                        }
                    }
                }
            }
            x=tempx,y=tempy;
            maxans=max(maxans,y*y+x*x);
        }
        return maxans;
    }
};