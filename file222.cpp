#include<iostream>
namespace SYCS4
{
    int mul()
    {
        int a,b;
        std::cout<<"Enter two numbers:";
        std::cin>>a>>b;
        std::cout<<"Multiplication of two numbers is:"<<(a*b);
        return 0;
    }

    int div()
    {
        int a,b;
        std::cout<<"Enter two numbers:";
        std::cin>>a>>b;
        std::cout<<"Division of two numbers is:"<<(a/b);
        return 0;
    }
}