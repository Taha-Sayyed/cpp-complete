#include<iostream>
using namespace std;

class BaseClass{
    public:
        virtual void function() final;
};

class DerivedClass:public BaseClass{
    public:
        void function() override{}; // compiler error: attempting to
                                    // override a final function
};