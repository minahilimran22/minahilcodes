#include<iostream>
using namespace std;
main()
{
cout<<"enter the current world population:";
int W;
cin>>W;
cout<<"enter the monthly birth rate:";
int M;
cin>>M;
int N=W+(M*360);
cout<<"number of people"<<N<<"in three decades";
} 
