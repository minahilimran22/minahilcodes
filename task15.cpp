#include<iostream>
using namespace std;
main(){
cout<<"enter imposters:";
int imposters;
cin>>imposters;
cout<<"enter players:";
int players;
cin>>players;
int chance=100*(imposters/players);
cout<<"Total chance<<"<<chance<<"";
}