#include<iostream>
namespace SYCS4
{
    int add()
    {
        int a,b,sum;
        std::cout<<"Enter two numbers:";
        std::cin>>a>>b;
        std::cout<<"sum of two numbers is:"<<(a+b);
    }
      int sub()
    {
        int a,b,sub;
        std::cout<<"Enter two numbers:";
        std::cin>>a>>b;
        std::cout<<"Difference of two numbers is:"<<(a-b);
    }  
    return 0;
}