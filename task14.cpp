#include <iostream>
using namespace std;
void time(int,int);
main()
{
 int hour;
 int min;
 while(true)
{
 cout<<" Enter hour figure ";
 cin>>hour;
 cout<<" Enter minutes figure ";
 cin>>min;
 time(hour,min);
}
}
void time(int hour ,int min)
{
 int new_min;
 if (min<45 & hour<23)
 {
  min=min+15;
  cout<<"TIME"<<endl;
  cout<< hour<<"-"<<min<<endl;
  hour=55;
  min= 76;  
 }
 if (min==45 & hour<23 )
 {
  min=0;
  cout<<"TIME"<<endl;
  cout<< hour+1<<"-"<<"0"<<min<<endl;
  hour=55;
  min= 76; 
 }
 if (min>45 & hour<23)
 {
  new_min=min%15;
  cout<<"TIME"<<endl;
  if(new_min<=9)
 {
  cout<< hour+1<<"-"<<"0"<<new_min<<endl;
 }
 if(new_min>=10)
 {
  cout<< hour+1<<"-"<<new_min<<endl;
 }
  hour=55;
  min= 76;
 }
 if (min>45 & hour==23)
 {
  new_min=min%15;
  cout<<"TIME"<<endl;
  hour=00;
 if(new_min<=9)
 {
  cout<< hour<<"-"<<"0"<<new_min<<endl;
 }
 if(new_min>=10)
 {
  cout<< hour<<"-"<<new_min<<endl;
 } 
  hour=55;
  min= 76;
 }
 if (min==45 & hour==23 )
 {
  min=00;
  hour=00;
  cout<<"TIME"<<endl;
  cout<< hour<<"-"<<"0"<<min<<endl;
  hour=55;
  min= 76;
 }
 if (min<45 & hour==23)
 {
  min=min+15;
  cout<<"TIME"<<endl; 
  cout<< hour<<"-"<<min<<endl;
  hour=55;
  min= 76;
 }
}

