#include<iostream>
using namespace std;
main(){
 string my_password,user_enter;
 my_password="pass@123!";
 cout<<"enter the password:";
 cin>>user_enter;
 if(user_enter==my_password){
 cout<<"I have cracked the code:";
}
 else{
 cout<<"It is not easy,try again:";
}
} 