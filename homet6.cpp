#include<iostream>
using namespace std;
main(){
    double num1,num2,result;
    char op;
    cout<<"inverse calculator:";
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;
    cout<<"Choose op(+,-,*,/):";
    cin>>op;
    if(op=='+'){

cout<<"result:"<<num1-num2<<endl;
    }
else  if(op=='-'){
 cout<<"result:"<<num1+num2<<endl;
    }
 if(op=='*'){
cout<<"result:"<<num1/num2<<endl;
}
 else if(op=='/'){
    cout<<"result:"<<num1*num2<<endl;
}
}



        