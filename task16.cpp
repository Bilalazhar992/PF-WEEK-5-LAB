#include <iostream>
using namespace std;
void tank_status(int,int,float,int);
main()
{
 float time;
 int flow_rate1;
 int flow_rate2;
 int volume;
 cout<<" Enter flow rate of pipe one in liter per hour ";
 cin>>flow_rate1;
 cout<<" Enter flow rate of pipe two in liter per hour ";
 cin>>flow_rate2;
 cout<<" Enter hours for which employee is absent ";
 cin>>time;
 cout<<" Enter volume of tank in liters ";
 cin>>volume;
 tank_status(flow_rate1,flow_rate2,time,volume);
}
void tank_status(int flow_rate1,int flow_rate2,float time,int volume)
{
 float a,b,c,d,e;
 int volume2;
 int volume3;
 float percentage_pipe1;
 float percentage_tank_volume;
 float percentage_pipe2;
 float time2;
 float time3;
 a=flow_rate1*time;
 b=flow_rate2*time;
 float time1;
 c=a+b; 
 time1=c/volume;
 time2=time/time1;
 time3=time-time2;
 c=a+b;
 d=a/c;
 e=b/c;
 volume2= volume-c;
 float f=(c/volume);
 percentage_pipe1=d*100;
 percentage_pipe2=e*100;
 percentage_tank_volume=f*100;
 if (volume2>0)
 {
  cout<<" Tank has filled to "<<percentage_tank_volume<<" percent "<<" Pipe 1 has contribution of "<<percentage_pipe1<<" percent "
      <<" Pipe 2 has contribution of "<<percentage_pipe2<<" percent ";
 }
 if (volume2<0)
 {
  volume3=c-volume;
  cout<<" For "<<time3<<" hours "<<" tank has overflown to "<<volume3<<" liters ";
 }  
}
  

 
 