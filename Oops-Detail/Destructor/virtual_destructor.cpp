#include<iostream>

using namespace std;

class Base{
    public:
        Base(){
            cout<<"Base constructor is called"<<endl;
        }
        //Destructor has to be made virtual, otherwise the Derive destructor will not be call.
        //Since here base class pointer is use to create a Derive class object
        //According to c++, compiler will not make destructor virtual even if there are virtual function in the base class

        virtual ~Base(){
            cout<<"Base Destructor is called"<<endl;
        }
};

class Derived:public Base{
    public:
        Derived(){
            cout<<"Derived Constructor is called"<<endl;
        }
        ~Derived(){
            cout<<"Derived Destructor is called"<<endl;
        }
};

int main(){
    
    Base* b=new Derived();
    delete b;
    return 0;
}