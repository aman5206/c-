#include <iostream>
using namespace std;

int main(){
    cout<<"hello world";
        return 0;
}
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "C++ Build and Run",
      "type": "shell",
      "command": "g++ -o C:\\cpp_striver\\lec1.exe C:\\cpp_striver\\lec1.cpp -std=c++17 && C:\\cpp_striver\\lec1.exe",
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "presentation": {
        "reveal": "always",
        "panel": "new"
      }
    }
  ]
}