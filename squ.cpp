#include<iostream>
using namespace std;
int main()
{
    int side,area,perimeter;
    cout<<"Enter side: ";
    cin>>side;
    area=side*side;
    perimeter=4*side;
    cout<<"Area = "<<area<<endl;
    cout<<"Perimeter = "<<perimeter;
    return 0;
}