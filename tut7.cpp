#include <iostream>
using namespace std;

int main(){

  // *** Example of If- else Ladder****
// int i=0;
//     for(i=0;i>-10;i--)
//     {
//         cout<<i--<<endl;
//     }
//     return 0;
// } 

// string name;
// cout<<"enter your name";
// cin>>name;
// cout <<"your name is"<<name<<endl;
// int age;
// cout<<"enter your age";
// cin>>age;

//  if ((age <18)&&(age>1)){
// cout<<"not allowed";

// }
// else if (age<1) { 
//     cout<<"not born yet";
// }
//   else{
//     cout<<"allowed to vote";
// }


//****Example of switch Case Statement****
// int age;
// cout<<"enter your age";
//   cin>>age;
// switch(age)
// {
  
// case 18:
// cout<<"you are 18"<<endl;
// break;
// case 22:
// cout<<"you are 22"<<endl;
// break;
// default:
// cout<<"No more special cases"<<endl;
// break;
// }
// cout<<"done with switch case "<<endl;
// int a=3;
// int* b= &a;
// cout<<b<<endl;
// cout<<&a<<endl;
// cout<<*b<<endl;

// int**c=&b;
// cout<<c<<endl;
// cout<<*c<<endl;
// cout<<**c<<endl;

int marks[]={23,46,78,87};
int i=0;
while (i<4){
  cout<<"The marks of " <<i<< " is "<<marks[i]<<endl;
i++;
}
int b=0;
do{
  
  cout<<"the value of marks "<< b << " is " <<marks[b] <<endl;
b++;
}while(b<4);
return 0;
}