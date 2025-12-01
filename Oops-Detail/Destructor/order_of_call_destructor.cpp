// This file illustrate the order of destruction of the constructor and destructor

#include<iostream>

using namespace std;

class A{
    public:
        A(){
            cout<<"A constructor is called"<<endl;
        }
        
        ~A(){
            cout<<"A Destructor is called"<<endl;
        }
};

class B{
    public:
        B(){
            cout<<"B Constructor is called"<<endl;
        }
        ~B(){
            cout<<"B Destructor is called"<<endl;
        }
};

int main(){
    
    A a1;
    B b1;
    
    return 0;
}