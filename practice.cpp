#include <iostream>
using namespace std;
int main(){

// Question practice  

// *****Question no 1**********
    // int number;

    // while (true) {
    //     cin >> number;

    //     if (number == 0) {
    //         break;
    //     }

    //     cout << number << " "<<endl;
    // }

    // cout << "\nLoop terminated";
    //  int number;
    //  int sum =0;
    // while (true){
    //     cin>>number;
    //     if (number<0){
    //         break;
    //     }
    //     sum=sum + number;
    //  }
    //  cout<< sum <<endl;

    // *** Question no 2 ***
//     int x;
// int sum =0;
// int i=0;

// for(;;){
//     cin>>x;
//     if (x<0){
//         cout << "loop stopped "<<endl;
//         break;
        
//     }
//     sum = x + sum;
//     i++;
// }
// cout <<"the sum of positive numbers you entered are :"<<sum<<endl;

// cout<<"the positive numbers you have entered are " <<i<<endl;

//*******Question no 3****
//  int x;
// int sum =0;
// int i=0;

// for(;;){
//     cin>>x;
//     if (x<0){
//         cout << "loop stopped "<<endl;
//         break;
        
//         if (x==0){
//             continue;
//         }
//     }
//     sum = x + sum;
//     i++;
// }
// cout <<"the sum of positive numbers you entered are :"<<sum<<endl;

// cout<<"the positive numbers you have entered are " <<i<<endl;


//     return 0; 
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

//***Program for counting and adding even and odd numbers seperately 
// int x ;
// int evensum =0;
// int oddSum=0;
// int evencount=0;
// int oddcount=0;
// for (;;){
//     cin >> x;
//     if (x<0){
//         cout << "loop stopped "<< endl;
//         break;
//     }
//     if (x%2==0){
// evensum+=x;
// evencount++;
//     }
//     if (x%2!=0){
//     oddSum+=x;
//     oddcount++;
// }
// }
// cout<<"the sum of even numbers you entered are :"<<evensum<<endl;
// cout<<"The sum of odd numbers you entered are:"<<oddSum <<endl;
// cout<<"total even numbers you have entered are :"<<evencount<<endl;
// cout<<"total odd numbers you have entered are :"<<oddcount<<endl;

// return 0;
// }

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
// int x;
// int min=0;
// for (;;){
//     cin>> x;
    
//     if (x<0){
//         cout <<"Loop Terminated "<<endl;
//         break;
//     }min=x;//agar ye line upar rakhta to break to kaam karta par x = negative value assign ho chuki hai to output negative value hi aayegi 
//     if (x<min){
//         min =x;
//     }
// }
// cout<<"minimum value in between number you entered is :"<<min<<endl;
//     return 0;
// }
 
//Program for finding prime numbers
//     int x;
//     int i;
//     bool prime = true;

//     cin >> x;

//     if (x <= 1) {
//         cout << "Not a prime number";
//         return 0;
//     }

//     for(i = 2; i < x; i++) {

//         if (x % i == 0) {
//             prime = false;
//             break;
//         }
//     }

//     if (prime) {
//         cout << "Prime number";
//     }
//     else {
//         cout << "Not a prime number";
//     }

//     return 0;
// }
// int x;
// int i;
// int count =0;
// cin >>x;
// if (x<0){
//     cout <<"not a prime number";
// }
// for (i=2;i<x;i++){
//     if (x%i==0){
//         count ++;
//     }
// }
// if (count >0){
//     cout <<"Not  a prime number";

// }
// else{
//     cout <<"prime number";
// }
// return 0;
// }



/* Program for finding sum of number of  digits */
//int x;
//     int sum = 0;

//     cin >> x;

//     while (x > 0) {

//         int digit = x % 10;

//         sum += digit;

//         x = x / 10;
//     }

//     cout << "Sum of digits = " << sum;

//     return 0;
// }
// program for reversing a number 
// int x;
// cin>> x;
// int rev=0;
// while (x>0){
//     int digit =x%10;
//     rev=rev*10+digit;
//     x=x/10;
// }
// cout <<"Reverse of digit is :"<<rev<<endl;
// return 0;
// }

// program for finding Palindrome number 
// int x;
// cin>>x;
// int y=x;
// int rev=0;

// while (x>0){
//     int digit =x%10;
//     rev=rev*10+digit ;
//     x=x/10;

// }
// if (rev==y){
//     cout <<"palindrome number";
// }
// else {
//     cout <<"Not a palindrome number";
// }
// return 0;
// }
int a=5 ;
int b=10;
int temp=a;
a =b;
b=temp;
cout <<"a ="<<a <<"b="<<b;
return 0;
}