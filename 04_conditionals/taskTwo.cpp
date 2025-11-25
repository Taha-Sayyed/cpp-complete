/*

**Challenge 2: If-Else Statement**\
   Create a program that asks the user for their age. If the user is older than 18, allow them to proceed with purchasing tea; otherwise, print a message saying they are too young to purchase.
*/

#include<iostream>
using namespace std;

int main(){

    int userAge;

    cout<<"Hey, What is your age?"<<endl;
    cin>>userAge;

    if(userAge>18){
        cout<<"You are allowed to purchase"<<endl;
    }
    else{
        cout<<"You are not allowed to purchase"<<endl;
    }

    return 0;
}
