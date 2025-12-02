#include<iostream>
using namespace std;

class BaseClass final{
    public:
        virtual void function();
};

class DerivedClass:public BaseClass{
    public:
        void function() override{}; // compiler error: BaseClass is
                                    // marked as non-inheritable
};