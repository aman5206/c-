#include <iostream>
using namespace std;
int main(){
    int a=3;
    int b=6;
//  a=5,b=5;
 int c=((a==b)&&(a>=b));
// cout<<"this is tutorial .\n the value of a is" << a <<".\n the value of b is"<< b;
if (c=1)
{
    /* code */
    cout<<"true"<<endl;
}

cout<<(a==b) <<endl;
cout<<(a>=b)<<endl;
cout<<(!(a==b));

return 0;
}

// #include <iostream>
// using namespace std;

// // Union definition
// union Data {
//     int i;
//     float f;
//     char c;
// };

// int main() {
//     Data data;  // Union variable

//     // 1️⃣ Store integer
//     data.i = 50;
//     cout << "Integer value: " << data.i << endl;

//     // 2️⃣ Store float (overwrites integer)
//     data.f = 3.14;
//     cout << "Float value: " << data.f << endl;

//     // 3️⃣ Store char (overwrites float)
//     data.c = 'A';
//     cout << "Char value: " << data.c << endl;

//     // 4️⃣ Accessing previous values is unreliable
//     cout << "Integer now (may be garbage): " << data.i << endl;
//     cout << "Float now (may be garbage): " << data.f << endl;
// cout<<"character now" <<data.c << endl;
//     return 0;
// }