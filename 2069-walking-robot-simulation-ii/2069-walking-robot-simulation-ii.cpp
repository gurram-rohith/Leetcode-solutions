class Robot {
public:
    int width,height;
    string dir;
    int posx,posy;
    Robot(int width, int height) {
        this->width=width;
        this->height=height;
        dir="East";
        posx=0;
        posy=0;
    }
    
    void step(int num) {
        num%=2*(width-1)+2*(height-1);
        if(num==0)
        {
            num=2*(width-1)+2*(height-1);
        }
        while(num>0)
        {
            int curx=posx,cury=posy;
            if(dir=="East")
            {
                if(posx+num<width)
                {
                    posx+=num;
                    num=0;
                }
                else
                {
                    num=num-(width-1-posx);
                    posx=width-1;
                    dir="North";
                }
            }
            else if(dir=="North")
            {
                if(posy+num<height)
                {
                    posy+=num;
                    num=0;
                }
                else
                {
                    num=num-(height-1-posy);
                    posy=height-1;
                    dir="West";
                }
            }
            else if(dir=="South")
            {
                if(posy-num>=0)
                {
                    posy-=num;
                    num=0;
                }
                else
                {
                    num-=posy;
                    posy=0;
                    dir="East";
                }
            }
            else
            {
                if(posx-num>=0)
                {
                    posx-=num;
                    num=0;
                }
                else
                {
                    num-=posx;
                    posx=0;
                    dir="South";
                }
            }
        }
    }
    
    vector<int> getPos() {
        return {posx,posy};
    }
    
    string getDir() {
        return dir;
    }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->step(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */