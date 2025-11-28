// Write a C++ program that demonstrates the use of static data members and static member functions within a class. Create a class named Student that contains a private static integer variable used to keep track of how many Student objects have been created. Initialize this static variable outside the class definition. Inside the class, define a constructor that increments the static counter each time a new Student object is instantiated. Also include a static member function that returns the current value of the counter; this function should only access static members. In the main() function, first display the initial count by calling the static function without creating any objects. Then create three Student objects, and again call the static function—without using an object—to display the total number of Student instances created. Use appropriate cout statements to show the output.


#include<iostream>
using namespace std;


class Student{
    private:
        static int count;

    public:
        Student(){
            count++;
        }

        static int getCount(){
            return count;
        }
};


int Student::count=0; //To allocate storage for it, C++ requires a separate definition outside the class.

int main(){

    cout<<"Number of student currently "<<Student::getCount()<<endl;

    Student s1,s2,s3;

    cout<<"Now the number of students are "<<Student::getCount()<<endl;


    return 0;
}