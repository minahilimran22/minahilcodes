#include<iostream>
using namespace std;
main(){
 float red_roses,white_roses,tulips;
 cout<<"enter number of red roses:";
 cin>>red_roses;
 cout<<"enter number of white roses:";
 cin>>white_roses;
 cout<<"enter number of tulips:";
 cin>>tulips;
 float price1=2.00;
 float price2=4.10;
 float price3=2.50;
 
 float original_price;
 original_price=(red_roses*price1)+(white_roses*price2)+(tulips*price3);
 
 if(original_price>200){
    float discount;
    discount=original_price*0.2;
    float final_price;
    final_price=original_price-discount;
 
 cout<<"Original price:"<<original_price<<endl;
 cout<<"discounted_price:"<<final_price<<endl;
 }
}
