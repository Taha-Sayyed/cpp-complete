// In this task, you will study a C++ program that demonstrates the use of a class with inline functions. The program defines a Rectangle class that stores the width and height of a rectangle as private data members and initializes them through a constructor. You will observe how the inline function setValue() is used to update the dimensions of the rectangle and how the inline function area() calculates the area based on the width and height passed as parameters. In the main() function, a Rectangle object is created with initial values, updated using setValue(), and then used to display the area. Your goal is to understand how the constructor, inline functions, and member variables interact in this program, and to explain how the area is computed and displayed using the class methods.

#include<iostream>
using namespace std;


class Rectangle{
    private:   
        float width;
        float height;
    public:
        Rectangle(float w,float h):width(w),height(h){};
        inline void setValue(float w,float h){
            width=w;
            height=h;
        }
        inline float area(float w,float h){
            return w*h;
        }
};

int main(){

    Rectangle rect(10.0,20.0);
    rect.setValue(50.0,30.0);
    cout<<rect.area(50.0,30.0)<<endl;

    return 0;
}