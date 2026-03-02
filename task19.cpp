#include<iostream>
using namespace std;
main(){
cout<<"enter initialvelocity:";
int initialvelocity;
cin>>initialvelocity;
cout<<"enter time:";
int time;
cin>>time;
cout<<"acceleration:";
int acceleration;
cin>>acceleration;
int finalvelocity;
finalvelocity=initialvelocity+(acceleration*time);
cout<<"finalvelocity="<<finalvelocity<<"";
}