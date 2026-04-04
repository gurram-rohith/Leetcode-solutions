// Last updated: 4/5/2026, 12:12:23 AM
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        if(numBottles<numExchange)
        return numBottles;
        int fullbot=-1,drunkbot=0,emptybot=0;
      int x=0;
        emptybot+=numBottles;
        drunkbot=numBottles;
        while(emptybot>=numExchange||fullbot!=0){


            cout<<emptybot<<" "<<numExchange<<endl;
            if(fullbot==-1)
            fullbot=0;
            else if(fullbot+emptybot<numExchange)
            break;
            if(emptybot>=numExchange){
                fullbot+=1;
                emptybot-=numExchange;
                numExchange++;
            }
            else{
              emptybot+=fullbot;
              drunkbot+=fullbot;
              fullbot=0;
            }
        }
        
        drunkbot+=fullbot;
        return drunkbot;
    }
};