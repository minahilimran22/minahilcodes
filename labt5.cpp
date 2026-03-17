#include<iostream>
using namespace std;
main(){
    int holidays;
    cout<<"enter number of holidays:";
    cin>>holidays;
    int workingdays;
 workingdays=365-holidays;
 int playtime;
 playtime=(workingdays*63)+(holidays*127);
 int norm;
 norm=30000;
 int difference_minutes;
 difference_minutes=abs(playtime-norm);
 int hours;
 hours=difference_minutes/60;
 int minutes;
 minutes=difference_minutes%60;
 if(playtime>norm){
 cout<<"Tom will run away" <<endl;
 cout<<hours<<"hours and"<<minutes<<"minutes more for play";
 }
 else{
 cout<<"tom sleeps well"<<endl;
 cout<<"hours and"<<minutes<<"minutes more for play";
 }
}
