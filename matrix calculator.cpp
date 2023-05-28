#include <iostream>

int main()
{
    std::cout<<"enter 1 to read 1st matrix\n"
             "enter 2 to display 1st matrix\n"
             "enter 3 to read 2nd matrix\n"
             "enter 4 to display 2nd matrix\n"
             "enter 5 to display addition of both the matrix\n"
             "enter 6 to display substraction of 2nd matrix from 1st\n"
             "enter 7 to display substraction of 1st matrix from 2nd\n"
             "enter 8 to display multiplication of both the matrix\n";
             
    std::cout<<"\nenter row wise\n";
    float a[10][10];
    float b[10][10];
    float c[10][10];
    std::cout<<"enter number of rows to enter\n";
    int m;
    std::cin>>m;
    std::cout<<"enter number of columns to enter\n";
    int n;
    std::cin>>n;
    std::cout<<"\n";
    char ch{ 'y' };
    while (ch == 'y')
    {
        if (ch == 'y')
        {
            std::cout<<"enter your choice from above given list\n";
            int s;
            std::cin >> s;
            switch (s)
            {
            case 1:
            {
                for(int i=0;i<m;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                      std::cin>>a[i][j];
                    }
                }
                break;
            }
            case 2:
            {
                for(int i=0;i<m;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                      std::cout<<a[i][j]<<"\t";
                    }
                    std::cout<<std::endl;
                }   
                break;
            }
            case 3:
            {
                for(int i=0;i<m;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                      std::cin>>b[i][j];
                    }
                }
                break;
            }
            case 4:
            {
                for(int i=0;i<m;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                      std::cout<<b[i][j]<<"\t";
                    }
                    std::cout<<std::endl;
                } 
                break;
            }
            case 5:
            {
                for(int i=0;i<m;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                      c[i][j]= a[i][j] + b[i][j];
                      std::cout<<c[i][j]<<"\t";
                    }
                    std::cout<<std::endl;
                } 
                break;
            }
            case 6:
            {
                for(int i=0;i<m;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                      c[i][j]= a[i][j] - b[i][j];
                      std::cout<<c[i][j]<<"\t";
                    }
                    std::cout<<std::endl;
                } 
                break;
            }
            case 7:
            {
                for(int i=0;i<m;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                      c[i][j]= b[i][j] - a[i][j];
                      std::cout<<c[i][j]<<"\t";
                    }
                    std::cout<<std::endl;
                } 
                break;
            }
            case 8:
            {
                for(int i=0;i<m;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        c[i][j]=0;
                        for(int k=0;k<n;k++)
                        {
                          c[i][j]= c[i][j] + (a[i][k] * b[k][j]);
                          std::cout<<c[i][j]<<"\t";
                        }
                    }
                    std::cout<<std::endl;
                }
                break;
            }
            }
        }
        std::cout << "enter y to continue and n to exit\n";
        std::cin >> ch;
    }


    return 0;
}
