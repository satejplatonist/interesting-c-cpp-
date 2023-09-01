#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

long long binaryToDecimal(long long bin)
{
    std::vector<int> obj;
    while(bin!=0)
    {
        obj.push_back(bin%10);
        bin=bin/10;
    }
    std::reverse(obj.begin(),obj.end());
    long long x=0,y=0,n=0;
    for(const int& i:obj)
    {
        y=i*std::pow(2,obj.size()-1-n);
        n++;
        x+=y;
    }
    return x;
}


int main()
{
    std::cout<<binaryToDecimal(1100011);
    return 0;
}
