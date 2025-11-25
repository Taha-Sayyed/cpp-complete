/*

4. **Challenge 4: Switch Case**\
   Write a program that offers different tea brewing methods. The user selects a method (1 for Boiling, 2 for Steeping, 3 for Iced Tea), and the program prints the instructions for the selected brewing method. Use a switch statement to handle the selections.


*/

#include<iostream>
using namespace std;

int main(){
    
    int expression;
    cout<<"Select the int number between 1 to 3"<<endl;
    cin>>expression;
    switch(expression){
        case 1:
            cout<<"Boiling"<<endl;
            break;
        case 2:
            cout<<"Steeping"<<endl;
            break;
        case 3:
            cout<<"Iced tea"<<endl;
        
        default:
            cout<<"Choose the correct expression"<<endl;
    }



    return 0;
}
