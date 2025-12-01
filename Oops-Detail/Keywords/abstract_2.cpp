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

        void displayDetail() override{
            cout<<"Derived class Detail"<<endl;
        }

        ~Derived(){
            cout<<"Derived Destructor is called"<<endl;
        }
};

int main(){
    
    Base* b=new Derived(); //pointer to abstract class type
    b->displayDetail();
     
    return 0;
}