#include <iostream>
using namespace std;
int comparison (int,int);
main()
{
 int num1;
 int num2;
 int result;
 cout<<"Enter first number ";
 cin>>num1;
 cout<<"Enter second number ";
 cin>>num2;
 result = comparison(num1,num2);
 cout<<" Greater number is "<<result;
}
 
int comparison (int a,int b) 
{
 if(a<b)
{
 return b;
}
if(a>b)
{
 return a;
}
}