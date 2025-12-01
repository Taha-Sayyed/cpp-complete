#include<iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout<<"Base constructor is called"<<endl;
        }
        virtual void displayDetail()=0;
        
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
    
    //Derived d; 
    //Give error since the Derived class here is also Abstarct '
    //since no override of the virtual function declared in the Base class

         
    return 0;
}