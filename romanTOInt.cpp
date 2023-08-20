int romanToInt(std::string s)
    {
        int x=0;
        int y=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I')
            {
                if(s[i+1]=='V'){y=4;i++;}
                else if(s[i+1]=='X'){y=9;i++;}
                else{y=1;}
            }
            else if(s[i]=='V'){y=5;}
            else if(s[i]=='X')
            {
                if(s[i+1]=='L'){y=40;i++;}
                else if(s[i+1]=='C'){y=90;i++;}
                else{y=10;}
            }
            else if(s[i]=='L'){y=50;}      
            else if(s[i]=='C')
            {
                if(s[i+1]=='M'){y=900;i++;}
                else if(s[i+1]=='D'){y=400;i++;}
                else{y=100;}
            }
            else if(s[i]=='D'){y=500;}
            else if(s[i]=='M'){y=1000;}   
            x=x+y;
        }
        return x;
    }
