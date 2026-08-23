#include <iostream>
using namespace std;

int main(){
    //****break and continue statements****
    //**** works in every loop*/
    int i=0;
    for (i = 0; i < 5; i++)
    {
        
        if(i==2){
            continue;
        }
        cout<<i<<endl;
        /* code */
    }
    
    return 0;
}