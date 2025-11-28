// Write a C++ program that demonstrates how to define member functions outside a class using the scope resolution operator. Create a class named rectangle with private data members length and breadth. Include a constructor that uses the this pointer to initialize these variables. Declare two member functions, area() and perimeter(), inside the class but define them outside the class using the :: operator. The area() function should return the product of the length and breadth, while the perimeter() function should compute twice the sum of length and breadth. In the main() function, create an object of the rectangle class, initialize it with sample values, and display both the area and perimeter using the corresponding member functions.


#include<iostream>
using namespace std;

class Rectangle{
    private:    
        int length;
        int breadth;
    public:
        Rectangle(int length,int breadth){
            this->length=length;
            this->breadth=breadth;
        }

        int area() const;
        int perimeter() const;
};

int Rectangle::area() const{
    return length*breadth;
}

int Rectangle::perimeter() const{
    return 2 * (length + breadth);
}

int main(){

    Rectangle r1(10,20);
    cout<<"area of the rectangle is "<<r1.area()<<endl;
    cout<<"Perimeter of the rectangle is "<<r1.perimeter()<<endl;


    return 0;
}