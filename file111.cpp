#include<iostream>
namespace SYCS4
{
    int add()
    {
        int a,b;
        std::cout<<"Enter two numbers:";
        std::cin>>a>>b;
        std::cout<<"Sum of two numbers is:"<<(a+b);
        return 0;
    }

    int sub()
    {
        int a,b;
        std::cout<<"Enter two numbers:";
        std::cin>>a>>b;
        std::cout<<"Subtraction of two numbers is:"<<(a-b);
        return 0;
    }
}