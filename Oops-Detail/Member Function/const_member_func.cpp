#include<iostream>
using namespace std;

class Date{
    private:
    int month;
    public:
        static int call_count; //static data member 
        int getMonth() const;
        int setMonth(int month_input);

        static perform_action(){
            call_count++;//This is possible to modify since call_count is static and not a part of object
        }
};

int Date::call_count=0;

int Date::getMonth() const{
    //month=10; //error since const
    return month;
}

int Date::setMonth(int month_input){
    month=month_input;
}

int main(){
    
    Date d1;
    
    d1.setMonth(2);
    cout<<d1.getMonth()<<endl;
    
    cout<<"Incrementing the call_count by calling the function perform_action"<<endl;
    Date::perform_action();
    cout<<"Call count: "<<Date::call_count<<endl;
    return 0;
}