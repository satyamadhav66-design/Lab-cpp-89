#include<iostream>
using namespace std;
int main()
{
    float r,area,perimeter;
    cout<<"Enter radius: ";
    cin>>r;
    area=3.14*r*r;
    perimeter=2*3.14*r;
    cout<<"Area = "<<area<<endl;
    cout<<"Perimeter = "<<perimeter;
    return 0;
}