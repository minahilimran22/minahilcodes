#include<iostream>
using namespace std;
main()
{
int wins;
cout<<"enter the number of wins:";
cin>>wins;
int draws;
cout<<"enter the number of draws:";
cin>>draws;
int losses;
cout<<"enter the number of losses:";
cin>>losses;
int points=wins*3+draws*1+losses*0;
cout<<"Pakistan has obtained"<<points<<"in Asia cup tournament";
}


