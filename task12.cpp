#include <iostream>
using namespace std;
bool check(int);
main()
{
 int num;
 bool result;
 string yes;
 yes = " true ";
 string no;
 no = " false ";
 while(true)
 {
 cout<<" Enter Number: ";
 cin>>num;
 result= check(num);
 if(result==true)
 { 
 cout<<" Entered number is symmetrical "<<yes<<endl;
 }
 if(result!=true)
 { 
 cout<<" Entered number is symmetrical "<<no<<endl;
 }
 }
}
bool check(int num)
{ 
 if(num%10==num/100)
{
 return true;
}
 if(num%10!=num/100)
{
 return false;
}
}
 