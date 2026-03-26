#include <iostream>
using namespace std;
int main(){
    int age;
cout<<"Enter your age";
cin>>age;

if ((age<18)&&(age>0)){
    cout<<"you are not allowed to vote";
}

    else if(age==18){
        cout<<"you are allowed to vote but under guidance";

    }

    else if (age<1){
        cout<<"kaha se aaye ho bhai";
    }
    else{
        cout<<"you are allowed to vote";
    }

    return 0;
}  