// //Task
// Write a C++ program that demonstrates the use of classes, access modifiers, and constructors. Create a class called Employee that contains two private data members, salary (double) and empID (int), which should not be accessible from outside the class. Include one public data member, name (string), which can be accessed freely. Add a constructor that accepts three arguments—a name, a salary value, and an ID number—and uses these to initialize the class members. In the main() function, create an Employee object using the constructor, and display only the employee’s name on the screen.

#include<iostream>
using namespace std;

class Employee{
    private:
        double salary;
        int empID;
    public:
        string name;
        Employee(string name,double salary,int id){
            this->name=name;
            empID=id;
            this->salary=salary;
        }
        ~Employee(){}
};


int main(){
    
    Employee emp_1("Taha Sayyed",50000,101);
    cout<<"Employee name is "<<emp_1.name<<endl;

    return 0;
}