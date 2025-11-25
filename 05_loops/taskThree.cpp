/*
## 3. For Loop
Challenge:
Write a program that prints the brewing instructions for making 5 cups of tea. The brewing process should be printed once for each cup using a for loop.


*/


#include<iostream>
using namespace std;

int main(){

    int teaCup=5;
    for(int i=0;i<teaCup;i++){
        cout<<"Brewing instruction for "<<i+1<<" cup"<<endl;
    }

    return 0;
}
