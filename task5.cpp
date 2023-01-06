#include <iostream>
#include <cmath>
using namespace std;
main()
{
 int num1;
 int num2;
 int result;
 cout<<"Enter first number ";
 cin>>num1;
 cout<<"Enter second number ";
 cin>>num2;
 result =pow(num1,num2);
 cout<<num1<<" raise to the power "<<num2<<" is equal to "<<result;
}