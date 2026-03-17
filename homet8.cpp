#include<iostream>
using namespace std;
main(){
char ch;
cout<<"Enter a character:";
cin>>ch;
if(ch>='0'&&ch<='9'){
 cout<<"the character is a number."<<endl;
}
else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){


cout<<"the character is a vowel."<<endl;
}
else if(ch>='a'&&ch<='z'||ch>='A'&&ch>='Z'){
cout<<"the character is a consonant."<<endl;
}
else{


 cout<<"the character is not a number,vowel, or consonant."<<endl;

}
}    




