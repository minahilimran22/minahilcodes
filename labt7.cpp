#include<iostream>
using namespace std;
main(){
  string shape;
  cout<<"enter the shape:";
  cin>>shape;
  if(shape=="square"){
    float side,area;
    cout<<"enter no.";
    cin>>side;
    area=side*side;
    cout<<"AREA:"<<area;
  }
  else if(shape=="rectangle"){
    float side1,side2,area;
    cout<<"enter no1,no2";
    cin>>side1>>side2;
    area=side1*side2;
    cout<<"AREA:"<<area;
  }
  else if(shape=="circle"){
    float radius,area;
    cout<<"enter radius";
    cin>>radius;
    area=3.14*radius*radius;
    cout<<"AREA:"<<area;
  }
  else if(shape=="triangle"){
    float base,height,area;
    cout<<"enter base,height";
    cin>>base>>height;
    area=0.5*base*height;
    cout<<"AREA:"<<area;
  }

}