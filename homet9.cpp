#include<iostream>
using namespace std;
main(){
string name1,name2,name3;
int age1,age2,age3;
cout<<"Enter the name and age of first brother:";
cin>>name1>>age1;
cout<<"Enter the name and age of second brother:";
cin>>name2>>age2;
cout<<"Enter the name and age of third brother:";
cin>>name3>>age3;
if(age1<=age2&&age1<=age3){
cout<<name1<<"is the youngest<<";
}
else if(age2<=age1&&age2<=age3){
cout<<name2<<"is the youngest<<";
}
else{
cout<<name3<<"is the youngest<<";
}
}


