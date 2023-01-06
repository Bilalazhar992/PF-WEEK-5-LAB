#include <iostream>
using namespace std;
string decision (int);
main ()
{
 int num1;
 int num;
 string result;
 cout<<" Enter Number have five digits: ";
 cin>>num1;
 int sum=0;
 int r;
 r=num1%10;
 sum=sum+r;
 num=num1/10;
 r=num%10;
 sum=sum+r;
 num=num/10;
 r=num%10;
 sum=sum+r;
 num=num/10;
 r=num%10;
 sum=sum+r;
 num=num/10;
 sum=sum+num;
 result = decision(sum);
 cout<<" Number "<<num1<<" is "<<result;
}
string decision (int sum)
{
 if (sum%2!=0)
 {
  return "ODDISH";
 }
 if (sum%2==0)
 {
  return "EVENISH";
 }
}

