
    // int x=25;
    // cout<<x<<endl;

    // x=0x15;
    // cout<<x;

//    

// int a=3;
// char c=';';
// cout<<int(c)<<endl;
// cout<<a+c<<endl;

// cout<<"the size of int data typr is  :"<<sizeof(int)<<"bytes"<<endl;
// cout<<"the size of char data typr is  :"<<sizeof (char)<<"bytes"<<endl;
// cout<<"the size of double data typr is  :"<<sizeof (double)<<"bytes"<<endl;
// cout<<"the size of float data typr is  :"<<sizeof (float)<<"bytes"<<endl;
// cout<<"the size of bool data typr is  :"<<sizeof (bool)<<"bytes"<<endl;


// int a=6,b=6;
// int n=((a==b)&&(a<=b));
// cout<<(!n);
    

//     cout<<(a&&b);
//     cout<<(a||b);
//     cout<<(!b);
//     return 0;
// }

// string str;
// getline(cin,str);
// cout<<str;
// return 0;
// }
// int x;
// int sum =0;
// int i=0;

// for(;;){
//     cin>>x;
//     if (x<0){
//         cout << "loop stopped "<<endl;
//         break;
//     }
//     if (x>0){
//         i++;
//     }
//     else if (x=0){
//         continue;
//     }
//     if (i>0){
//         cout<<sum/i;
        
//     }else cout<< "prefer not to say";
    
//         sum = x +sum;
// }
// cout << sum<<endl;
// cout<<i<<endl;
//     return 0;
// } 
// int x;
// int y;
// int z;
// int a=0;
// int b =0;
// for (;;){
//     cin >>x;
//     if (x<0){
//         cout <<"Loop stopped";
//         break;
//     }
//     if (y%2==0){
//         a+=y;
//         cout<<"the value of even numbers are :"<<a <<endl;

//     }
//     else if (z%2!=0){
//         b+=z;
//         cout<<"the value of odd numbers are :"<< b << endl;
//     }

// }
// return 0;
// }
#include <iostream>
using namespace std;

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

void displayBoard() {
    cout << "\n";
    for(int i = 0; i < 3; i++) {
        cout << " " << board[i][0] << " | "
             << board[i][1] << " | "
             << board[i][2] << endl;

        if(i < 2)
            cout << "---|---|---" << endl;
    }
    cout << "\n";
}

bool checkWin() {

    for(int i = 0; i < 3; i++) {
        if(board[i][0] == board[i][1] &&
           board[i][1] == board[i][2])
            return true;
    }

    for(int i = 0; i < 3; i++) {
        if(board[0][i] == board[1][i] &&
           board[1][i] == board[2][i])
            return true;
    }

    if(board[0][0] == board[1][1] &&
       board[1][1] == board[2][2])
        return true;

    if(board[0][2] == board[1][1] &&
       board[1][1] == board[2][0])
        return true;

    return false;
}

int main() {

    int move;
    char player = 'X';

    for(int turn = 0; turn < 9; turn++) {

        displayBoard();

        cout << "Player " << player
             << ", enter position (1-9): ";
        cin >> move;

        int row = (move - 1) / 3;
        int col = (move - 1) % 3;

        if(board[row][col] == 'X' ||
           board[row][col] == 'O') {
            cout << "Position already taken!\n";
            turn--;
            continue;
        }

        board[row][col] = player;

        if(checkWin()) {
            displayBoard();
            cout << "Player " << player
                 << " wins!\n";
            return 0;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    displayBoard();
    cout << "Match Draw!\n";

    return 0;
}