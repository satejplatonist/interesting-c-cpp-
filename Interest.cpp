#include <iostream>
#include <string>
#include <math.h> // for pow() function


class interest // class interest 
{
      // It includes only 2 functions simple and compound interest 
      // No other function to be added due to Single Responsibility Principle 
  public:
  long long principleIntrest(long long value,double rate,int years);
  long long compoundIntrest(long long value,double rate,int years);
};

long long interest::principleIntrest(long long value,double rate,int years) 
{ // function for simple imterest
    value=value*rate*years;
    return value;
}

long long interest::compoundIntrest(long long value,double rate,int years)
{  // function for compund interest
    value=value* pow((1+(rate/100)),years);
    return value;
}

int main()
{
    interest i;
    std::cout << "enter value : " << std::endl;
    long long value;
    std::cin>>value;
    std::cout <<"enter rate : "  << std::endl;
    double rate;
    std::cin>>rate;
    std::cout << "enter years : " << std::endl;
    int years ;
    std::cin>>years;
    std::cout<<i.principle(value,rate,years)<<"\n";
    std::cout<<i.compound(value,rate,years)<<"\n";
    return 0;
}

