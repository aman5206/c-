#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
/* Code for taking agr from user and decide accordingly
    int x;
    cin>>x;
    if (x<18){
        cout<<"You are not eligiblr for job";
    }
    else if(x<55){
        cout <<"you are eligible for job";
    }
    else if ((x>=55)&&(x<=59)){
        cout<<"you are eligible But you have to retire soon";

    }
    else
    cout<<"Its yor Retirement time";
    */
//    int day;
//    cin>>day;
//    switch(day){
//     case 1:
//     cout <<"Monday"<<endl;
//     case 2:
//     cout<<"Tuesday"<<endl;
//     case 3:
//     cout<<"Wednesday"<<endl;
//     case 4:
//     cout<<"Thursday"<<endl;
//     case 5:
//     cout<<"Friday"<<endl;
//     case 6:
//     cout<<"Saturday"<<endl;
//     case 7:
//     cout<<"Sunday"<<endl;
//    }
// ek code bana jo use se input leat rahe 
// negative number input lene par loop break __ho
// aur sabka sum karke de 
// using for loop
int x;
int sum =0;
int i=0;

for(;;){
    cin>>x;
    if (x<0){
        cout << "loop stopped "<<endl;
        break;
    }
    if (x>0){
        i++;
    }
    
        sum = x +sum;
}
cout << sum<<endl;
cout<<i<<endl;
    return 0;
} 