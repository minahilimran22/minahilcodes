#include<iostream>
using namespace std;
main(){
cout<<"enter minutes:";
int minutes;
cin>>minutes;
cout<<"enter fps:";
int fps;
cin>>fps;
int frames=minutes*60*fps;
cout<<"Total frames="<<frames<<"";
}