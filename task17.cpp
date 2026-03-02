#include<iostream>
using namespace std;
main(){
cout<<"Enter paintarea:";
int paintarea;
cin>>paintarea;
cout<<"Enter width:";
int width;
cin>>width;
cout<<"Enter height:";
int height;
cin>>height;
int wallspainted;
wallspainted=paintarea/(width*height);
cout<<"wallspainted"<<wallspainted<<"";
}