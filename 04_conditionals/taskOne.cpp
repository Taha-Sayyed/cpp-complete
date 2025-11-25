/*
**Challenge 1: If Statement**\
   Write a program that asks the user for their favorite tea. If they choose "Oolong," print a message saying, "You have excellent taste!"
*/


#include<iostream>
#include<string>

using namespace std;

int main(){
    string favouriteTea; 
    cout<<"Hey User,What is your favourite tea? "<<endl;
    cin>>favouriteTea;

    if(favouriteTea=="Oolong"){
        cout<<"You have excellent taste!"<<endl;
    }
    else{
        cout<<"";
    }

    return 0;
}
