#include <iostream>
using namespace std;
int multiply(int);
main()
{
 int num;
 int final;
 cout<<" Enter Number: ";
 cin>>num;
 final=multiply(num);
 cout<<num<<" after multipling with 5 becomes "<<final;
}
int multiply(int num)
{
 return num*5;
}