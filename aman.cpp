#include <iostream>
using namespace std;
int main(){
//     int age;
// cout<<"Enter your age";
// cin>>age;

// if ((age<18)&&(age>0)){
//     cout<<"you are not allowed to vote";
// }

//     else if(age==18){
//         cout<<"you are allowed to vote but under guidance";

//     }

//     else if (age<1){
//         cout<<"kaha se aaye ho bhai";
//     }
//     else{
//         cout<<"you are allowed to vote";
//     }
/*For loop   
for (int i=1;i<=40;i++){
    cout<<i<<endl;

}*/
//   while loop
// int i=1;
// while (i<=10){
//     cout<<i<<endl;
//     i++;
// }

// int i=1;
// do{
//     cout<<i<<endl;
//     i++;
// }while(i<10);


// for(int i=1;i<=10;i++){
//     cout<<6*i<<endl;
// }
//Making an grade-Marks system for school
// int marks;
// cout<<"enter your Marks :";
// cin>>marks;
// if(marks<=25){
//  cout<<"you have obtained F grade";
//     }
//     else if((marks >25)&&(marks<44)){
//         cout<<"you have obtained E grade";
//     }
//     else if((marks>=44)&&(marks<55)){
//         cout<<"you have obtained D grade";
//     }
//     else if ((marks>=55)&&(marks<65)){
//         cout<<"you have obtained C grade";
//     }
//     else if((marks>=65)&&(marks<85)){
//         cout<<"you have obtained B grade";
//     }
//     else
//     cout<<"you have obtained A grade";

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
    
 int x;
int sum =0;
int i=0;
int b;
int a;
float c=b/a;

for(;;){
    cin>>x;
    if (x<0){
        cout << "loop stopped "<<endl;
        break;
        
        if (x==0){
            continue;
        }
    }
    b= x + sum;
    a=i++;
}
cout <<"the sum of positive numbers you entered are :"<<b<<endl;

cout<<"the positive numbers you have entered are " <<i<<endl;
 cout <<c<<endl;

    return 0; 
}
    
