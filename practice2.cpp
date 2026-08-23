// Starting of arrays 
#include <iostream>
using namespace std;
int main(){
//     int i;
//     int sum=0;
//     int arr[5];
//     for (i=0;i<5;i++){
//         cin>>arr[i];
// sum+=arr[i];
//     }
//     cout<<"the sum of numbers you entered are"<<sum<<endl;
// Finding Maximum number in between 
// int i;
// int arr[5];
// for (i=0;i<5;i++){
//     cin >>arr[i];
// }
// int max=arr[0];
//     for (i=1;i<5;i++){
        
//     if (arr[i]>max){
//         max=arr[i];
//     }
// }
//     cout<<"Maximum value "<<max<<endl;

// int i;
// int arr[5];
// for (i=0;i<5;i++){
//     cin >>arr[i];
// }
// int min=arr[0];
// for (i=0;i<5;i++){
//     if (arr[i]<min){
//         min=arr[i];
//     }
// }
// cout<<min;

// int i;

// int arr[5];
// for (i=0;i<5;i++){
//     cin>>arr[i];
// }
// int largest =arr[0];
// int secondlargest=-1;
// for (i=1;i<5;i++){
// if (arr[i]>largest){
//     secondlargest=largest;
// largest=arr[i];
// }
// else if (arr[i]>largest && arr[i]!=largest){
//     secondlargest=arr[i];
// }
// }
// cout <<secondlargest<<endl;
//     return 0;
// }
// int i;
// int arr[5];
// int count=0;
// int target;
// cout <<"acquire your targert value ";
// cin >>target;
// for (i=0;i<5;i++){
//     cin >>arr[i];
// }
//     for (i=0;i<5;i++){
//         if (arr[i]==target){
//             count++;
            
//         }
//     }
//     if (count> 0){
//         cout <<"number found ";
//     }
//     else {
//         cout <<"number not found";
//     }
//     return 0;
// }

//     int arr[5];
//     int target;
//     int index = -1;
//     int count = 0;

//     cout << "Enter target: ";
//     cin >> target;

//     cout << "Enter 5 elements: ";
//     for(int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }

//     for(int i = 0; i < 5; i++)
//     {
//         if(arr[i] == target)
//         {
//             count++;

//             if(index == -1)
//             {
//                 index = i;
//             }
//         }
//     }

//     if(index != -1)
//     {
//         cout << "First occurrence at index " << index << endl;
//         cout << "Present " << count << " times";
//     }
//     else
//     {
//         cout << "Element not found";
//     }

//     return 0;
// }
int left =0;
int right =4;
int arr[5]={1,2,3,4,5};
while (left<right){
    if (left>=right){
        break;
    }
int temp =arr[left];
arr[left]=arr[right];
arr[right]=temp;
left ++;
right --;
}
cout <<arr[5];

return 0;
}

