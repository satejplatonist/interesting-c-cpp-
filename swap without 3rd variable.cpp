/* swapping without using third variable */

#include <iostream>
int main()
{   std::cout<<"enter two numbers : "<<"\n";
    
    // two variables are initialised
    int x;
    int y;
    
    // taking two values x and y 
    std::cin>>x;
    std::cin>>y;
    
    // printing values before swapping 
    
    std::cout<<"value of x before swapping : "<<x<<"\n";
    std::cout<<"value of y before swapping : "<<y<<"\n";
    
    // operations conducted
    
    // we added both variables so that we could have sort of both the values i.e x and y so x + y 
    x=x+y;
    // and then we do addition minus y so that we get value of x and we put value of x in y
    y=x-y;
    // and then we do addition minus x so that we get value of y and we put value of y in x
    x=x-y;
    
    // printing values of x and y after swapping 
    
    std::cout<<"value of x after swapping : "<<x<<"\n";
    std::cout<<"value of y after swapping : "<<y<<"\n";
    return 0;
}
