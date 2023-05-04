#include <iostream>

int main()
{
    int i{0},x;
    int arr[30]{};
    int m;
    std::cout<<"enter the number you want in binary : ";
    std::cin>>m;
    std::cout<<"the binary form of "<<m<<" is : ";
    if(m%2==0)
    {
        x=0;
    }
    else
    {
        x=1;
    }
    if(m==1){std::cout<<1;}
    else if(m==0){std::cout<<0;}
    else
    {
        while(m!=0)
        {
            arr[i]=m%2; 
            m=m/2;
            i++;
        }
        arr[i--]=arr[0];
        while(i!=0)
        {
            std::cout<<arr[i];
            i--;
        }
        std::cout<<x;
    }
    return 0;
}
