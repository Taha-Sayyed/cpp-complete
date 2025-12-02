#include<iostream>
using namespace std;


class Date{
    public:
        int month;
        void setMonth(int m);
};

void Date::setMonth(int m){
    month=m; //Both the statement are equivalent
    this->month=m;
}

int main(){

    Date myDate;
    myDate.setMonth(5);


    return 0;
}