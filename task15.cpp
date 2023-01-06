#include <iostream>
using namespace std;
void display (int);
main()
{
 int num;
 cout <<" Enter any number between 1 and 100 ";
 cin>>num;
 display (num);
}
void display (int num)
{
 if(num/10==1)
{
 cout<<" Ten ";
}
if(num/10==2)
{
 cout<<" Twenty ";
}
if(num/10==3)
{
 cout<<" Thirty ";
}
if(num/10==4)
{
 cout<<" Forty ";
}
if(num/10==5)
{
 cout<<" Fifty ";
}
if(num/10==6)
{
 cout<<" Sixty ";
}
if(num/10==7)
{
 cout<<" Seventy ";
}
if(num/10==8)
{
 cout<<" Eighty ";
}
if(num/10==9)
{
 cout<<" Ninty ";
}
if(num/10==100)
{
 cout<<" Hundred ";
}
if(num%10==1)
{
 cout<<" One ";
}
if(num%10==1)
{
 cout<<" One ";
}
if(num%10==2)
{
 cout<<" Two ";
}
if(num%10==3)
{
 cout<<" Three ";
}
if(num%10==4)
{
 cout<<" Four ";
}
if(num%10==5)
{
 cout<<" Five ";
}
if(num%10==6)
{
 cout<<" Six ";
}
if(num%10==7)
{
 cout<<" Seven ";
}
if(num%10==8)
{
 cout<<" Eight ";
}
if(num%10==9)
{
 cout<<" Nine ";
}
}