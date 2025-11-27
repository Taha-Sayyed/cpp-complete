#include<iostream>
using namespace std;


int generateID(){
    static int id=1000;
    return id++;
}


int main(){

    int emp_no;
    cout<<"Enter the number of employee to generate id"<<endl;
    cin>>emp_no;

    for(int i=1;i<=emp_no;i++){
        cout<<"Employee "<<i<<" has "<<generateID()<<endl;
    }


    return 0;
}