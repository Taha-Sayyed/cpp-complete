// The program defines a Rectangle class that demonstrates the use of const and non-const member functions in C++. The class stores a width and height, initializes them through a constructor, and provides different types of member functions to access or modify these values. The area() function is marked as const, meaning it is allowed to read member variables but cannot modify them. The setWidth() function is non-const and therefore can change the value of the width. The code also includes getWidth() and getHeight() as const accessor functions, with getHeight() returning a read-only reference. In the main() function, a const object r1 and a non-const object r2 are created to show how const objects can only call const functions. Attempting to call setWidth() on r1 would cause an error, while calling area() or the getters is allowed. The non-const object r2 is able to modify its width using setWidth(). The program then outputs the area and width values to demonstrate the difference between const and non-const behaviors.

#include<iostream>
using namespace std;

class Rectangle{
    private:
        float width;
        float height;
    public:
        Rectangle(float w,float h){
            width=w;
            height=h;
        }

        float area() const{
            return width*height;
        } 
        
        void setWidth(float new_width){
            width=new_width;
        } 

        float getWidth() const{
            return width;
        }

        const float& getHeight() const{
            return height;
        }
};


int main(){

    const Rectangle r1(10.0,20.0);
    Rectangle r2(30.0,40.0);

    cout<<"-------------------For r1 object-------------------"<<endl;
    cout<<r1.area()<<endl;
    //cout<<r1.setWidth()<<endl; Cannot do this
    cout<<r1.getWidth()<<endl; 
    cout<<r1.getHeight()<<endl; 
    

    return 0;
}