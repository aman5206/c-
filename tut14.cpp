#include <iostream>
using namespace std;


    typedef struct employee

    {

        int eID;
        char favchar;
        float salary;

    } ep;
    int main(){
    ep rohan;
    struct employee Mohan;
    rohan.eID=10;
    rohan.favchar= 'b'; 
    rohan.salary=100000;
    Mohan.eID=5;
    Mohan.favchar='h';
Mohan.salary=9877;
    cout<<"the value is"<<rohan.eID<<endl;
    cout<<"the valur is "<<rohan.favchar<<endl;
    cout<<"the value is "<<rohan.salary<<endl;
     cout<<"the value is"<<Mohan.eID<<endl;
     cout<<"the value is"<<Mohan.favchar<<endl;
     cout<<"the value is"<<Mohan.salary<<endl;
    
    return 0;
}