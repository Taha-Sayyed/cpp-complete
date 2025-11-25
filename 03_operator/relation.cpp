/*### 3. **Relational Operators**

### **Challenge:** A tea shop offers a loyalty program. Customers who buy more than 20 cups of tea get a special "Gold" badge, and those who buy 10 to 20 cups get a "Silver" badge. Write a program to display the badge they will receive based on the number of cups they buy.

> > , >=, <, <=
*/

#include<iostream>
#include<string>

using namespace std;

int main(){

    int numberOfCups;
    string badge;

    cout<<"Hey, how many cups of tea did you purchased"<<endl;
    cin>>numberOfCups;
    
    if(numberOfCups>20){
        badge="Gold";
        cout<<"You have earned Gold"<<endl;
    }
    else if(numberOfCups>=10 and numberOfCups<=20){
        badge="Silver";
        cout<<"You have earned Silver"<<endl;
    }
    else{
        cout<<"You have not earned any Badge"<<endl;
    }

    return 0;
}
