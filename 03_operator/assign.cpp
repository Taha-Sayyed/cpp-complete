/*

### 2. **Assignment Operators**

### **Challenge:** Write a program that allows a user to input the number of tea bags they have. Assign additional bags to them based on certain conditions (e.g., if they have fewer than 10 bags, give them 5 extra). Update the original number using assignment operators.

> +=, -=, \*=, /=, %=

*/

#include<iostream>
using namespace std;


int main(){

    int number_of_teabags;
    int addBag=5;

    cout<<"Hey, Give me the number of Tea Bags"<<endl;
    cin>>number_of_teabags;

    if(number_of_teabags<10){
        number_of_teabags+=addBag;
        cout<<"This is special case. Total number of bags are "<<number_of_teabags<<endl;
    }
    else{
        cout<<"Total number of bags are "<<number_of_teabags<<endl;
    }

    return 0;
}
