/*

## 1. While Loop
Challenge:
Write a program that keeps track of tea orders. Each time a cup of tea is made, decrease the number of cups remaining. The loop should run until all cups are served.

*/

#include<iostream>
using namespace std;

int main(){

    int totalCups;

    cout<<"Enter the total cups"<<endl;
    cin>>totalCups;

    while(totalCups>0){
        cout<<"Cup served"<<endl;
        totalCups--;
        cout<<"Cup remaining "<<totalCups<<endl;
    }


    return 0;
}
