#include <iostream>
using namespace std;
void decision_maker(char);
main()
{
 char a;
 cout<<" Enter character ";
 cin>>a;
 decision_maker (a);
}
void decision_maker(char b)
{
 if(b=='A')
{
 cout<<" You have entered capital A "<<endl;
} 
 if(b!='A')
{
 cout<<" You have not entered capital A "<<endl;
} 
}