// Write a C++ program that demonstrates the use of class access specifiers and inheritance. First, create a base class named Employee that contains one private data member (salary), one protected data member (empID), and one public data member (name). Include a constructor that initializes all three values. Then create a derived class named Manager that publicly inherits from Employee. In the derived class, implement a function that displays the manager’s name and employee ID, showing that the public and protected members of the base class can be accessed, while the private member remains inaccessible. In the main() function, create an object of the Employee class to display its name, and also create a Manager object to call the function that prints the manager’s details.


#include<iostream>
using namespace std;

class Employee{
    private:   
        double salary;
    protected:
        int empID;
    public:
        string name;
        Employee(string name,double salary,int id){
            this->name=name;
            this->salary=salary;
            empID=id;
        }
        ~Employee(){}
};

class Manager:public Employee{
    public: 
        //constructor
        Manager(string managerName, double salary, int id): Employee(managerName, salary, id) {}
        ~Manager(){}

        void printManagerDetail(){
            cout<<"Manager name is "<<name<<endl;
            cout<<"Manager id is "<<empID<<endl;
        }
};

int main(){

    Employee emp("Taha Sayyed",50000,101);
    cout<<"Name of the employee is "<<emp.name<<endl;

    Manager manager("Yaseen Sayyed",60000,102);
    manager.printManagerDetail();

    return 0;
}