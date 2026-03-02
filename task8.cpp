#include<iostream>
using namespace std;
main(){
cout<<"enter the voltage in volts:";
float voltage;
cin>>voltage;
cout<<"enter the current in amperes:";
float current;
cin>>current;
int power=voltage*current;
cout<<"power is"<<power;
}
