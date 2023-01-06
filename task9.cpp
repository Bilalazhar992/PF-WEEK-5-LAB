#include <iostream>
#include <cmath>
using namespace std;
float first_root_of_x (int,int,int);
float second_root_of_x (int,int,int);
main()
{
 int a;
 int b;
 int c;
 float result1;
 float result2;
 cout<<" Enter coefficient of x square ";
 cin>>a;
 cout<<" Enter coefficient of x  ";
 cin>>b;
 cout<<" Enter constant ";
 cin>>c;
 result1=first_root_of_x (a,b,c);
 result2=second_root_of_x (a,b,c);
 cout<< " Roots of quadratic equation are "<<result1<<"," <<result2;
}
float first_root_of_x (int c,int d,int e)
{ 
 float f,g,h,i,j;
 f=pow(d,2);
 g=f-4*c*e;
 h=sqrt(g);
 i=-d+h;
 j=i/(2*c);
 return j;
}
float second_root_of_x (int c,int d,int e)
{ 
 float f,g,h,i,j;
 f=pow(d,2);
 g=f-4*c*e;
 h=sqrt(g);
 i=-d-h;
 j=i/(2*c);
 return j;
}
