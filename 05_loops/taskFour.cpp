/*

# 4. Break Keyword
Challenge:
Write a program that keeps serving tea until the user says they’ve had enough (input 'stop'). Use a break statement to exit the loop when the user types 'stop'.

*/


#include<iostream>
#include<string>
using namespace std;


int main(){

    string userInput;
    while(true){
        cout<<"Serving the teas, Want more?"<<endl;
        cin>>userInput;
        if(userInput=="stop" || userInput=="STOP"){
            break;
        }
    }

    return 0;
}
