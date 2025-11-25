/*


### 4. **Logical Operators**

### **Challenge:** Create a program that checks if a user is eligible for a tea subscription discount. The discount applies if the user is either a student or has purchased more than 15 cups. Ask the user to input their status (student or not) and their cup count.

> > && and || operators

*/

#include<iostream>
using namespace std;

int main(){

    char isStudent;
    int numberOfCups;

    cout<<"Hey, Are you student (Answer in y or n)"<<endl;
    cin>>isStudent;

    cout<<"How many cups did you purchased"<<endl;
    cin>>numberOfCups;

    if(isStudent=='y' || numberOfCups>15){
        cout<<"You are eligible for a tea subscription discount"<<endl;
    }
    else{
        cout<<"You are not eligible for a tea subscription discount"<<endl;
    }

    return 0;
}
