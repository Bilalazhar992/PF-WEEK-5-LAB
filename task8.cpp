#include <iostream>
#include <cmath>
using namespace std;
float angle_conversion(int);
float tangent(float,int);
main()
{
 int angle;
 float final_angle;
 int base;
 cout<<" Enter base of shahdow ";
 cin>>base;
 cout<<" Angle in degrees ";
 cin>>angle;
 final_angle = angle_conversion(angle);
 float result;
 result=tangent(final_angle,base);
 cout <<" Height of tree is = "<<result; 
}
float angle_conversion(int angle)
{
 float radian;
 radian = angle/57.2958 ;
 return radian;
}
float tangent(float a, int base)
{
 float n;
 n=base*tan(a);
 return n;
}
 