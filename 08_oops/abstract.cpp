// WE don't define functionality while defining the virtual function
// The virtual function has no implementation in the base class.
// The derived class must provide the implementation.
//A class becomes abstract when it contains at least one pure virtual function.
// We don't create objects for abstract class

#include<iostream>

using namespace std;

//abstract class
class Tea{
    public:
        virtual void prepareIngredient()=0;
        virtual void brew()=0;
        virtual void serve()=0;

        void makeTea(){
            prepareIngredient();
            brew();
            serve();
        }

};


class greenTea: public Tea{
    public:
        void prepareIngredient() override {
            cout<<"Prepare Inigredients"<<endl;
        }
        void brew() override {
            cout<<"Brewing"<<endl;
        }
        void serve() override {
            cout<<"Serving"<<endl;
        }

};


int main(){

    greenTea GreenTea;
    GreenTea.makeTea();

    return 0;
}
