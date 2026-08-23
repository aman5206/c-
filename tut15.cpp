#include <iostream>
using namespace std;
int main(){
//Function prototype
// int sum(int,int);
// void greet();
// int main(){
//     int num1,num2 ;
//     greet();
//     cout <<"Enter the num1 :";
//     cin>>num1;

//     cout<<"Enter the num2 :";
//     cin>>num2;
//     cout<<"the sum of num1 and num2 is :"<<sum (num1,num2)<<endl;
//     //num1 and num2 are Actual Parameter

//     // cout << "The sum of num1 and num2 is:" <<num1+num2<<endl;
//     return 0;
// }
// int sum(int a,int b){
//     //a and b are formal parameters nad formal parameters will be taken from actual parameters
//     int c=a+b;
// return c;
// }
// void greet(){
//     cout<<"hello,Good Morning"<<endl;
// }

    //*****Example no . 4******

//     int x;
//     int count=0 ;
//     int sum =0;
//     for (;;){
//         cin >>x;
//         if (x<0){
//             cout << "loop stoppped "<< endl;
//             break;
//         }
//             if (x==0){
//                 continue;
//             }
// if (x>0){
//     count++;
// }
//                sum+=x;
               
//             }
//         cout <<"the sum of all positive numbers is :"<<sum<<endl;
//     cout<<"the total positive numbers are :"<<count<<endl;
    
    
//     cout << "the average of given values are :"<<sum /count<< endl;
//     return 0;
// }
// int x ;
// int sum =0;
// int Sum=0;
// for (;;){
//     cin >> x;
//     if (x<0){
//         cout << "loop stopped "<< endl;
//         break;
//     }
//     if (x%2==0){
// sum+=x;
//     }
//     if (x%2!=0){
//     Sum+=x;
// }
// }
// cout<<sum<<endl;
// cout<<Sum <<endl;



    // int x;
    // int max = 0;
    // int count = 0;

    // for(;;) {

    //     cin >> x;

    //     if (x < 0) {
    //         break;
    //     }

    //     if (x > max) {
    //         max = x;//agar x max. se bada ho gya to x ki value max. ko assign ho jayegi
    //     }

    //     count++;//count++ jitni baar ye code execute hoga wo count karega ya kitni baar apan ne input diya
    // }

    // if (count > 0) {
    //     cout << "Maximum number is: " << max;
    // } else {
    //     cout << "No valid numbers entered";
    // }
//     int x;
//     int sum =0;
//     for (;;){
//         cin >>x;
//         break;
//         x=x%10;
//         x;
//     }
   
//     sum+=x;
// cout<<sum;
//     return 0;
// }
//Program for findig sum of prime numbers
// int x;
// int i;
//  cin>>x;
// for (i=0;i<x;i++){
   
//     if (x%i==0){
//         cout << "prime number";

//     }
//     else{
//         cout <<"not a prime number";
//     }
// }
// return 0;
// }

    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << "* ";
        }
        cout << endl;   // Har row ke baad next line
    }

    return 0;
}