/*## 1. **Arithmetic Operators**

### **Challenge:** Create a program that calculates the total price of tea cups. The user inputs the number of cups they want and the price per cup. The program should calculate the total price, apply a 5% discount if the total is above a certain amount, and show the final price.

> +, -, \*, /, %

*/

#include<iostream>
using namespace std;

int main(){
    int PricePerCup=10;
    int totalCups;
    int finalPrice;
    
    cout<<"Give the number of cups required"<<endl;
    cin>>totalCups;
    finalPrice=totalCups*PricePerCup;

    if(finalPrice>100){
        finalPrice=finalPrice-0.05*finalPrice;
    }

    cout<<"The total price is "<<finalPrice<<endl;
    
}
