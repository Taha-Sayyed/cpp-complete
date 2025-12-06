#include<iostream>
using namespace std;

class Polygon{
    protected:
        int height;
        int width;
    public:
        void set_values(int x, int y){
            height=x;
            width=y;
        }

        virtual int area(){ //Not a pure virtual function
            return 0;
        }
};

class Rectangle:public Polygon{
    public: 
        int area() override{
            return height*width;
        }
};

class Triangle:public Polygon{
    public:
        int area() override{
            return (width*height/2);
        }
};

int main(){

    Polygon poly;
    Rectangle rect;
    Triangle trgl;

    Polygon* ppoly1=&rect;
    Polygon* ppoly2=&trgl;
    Polygon* ppoly3=&rect;

    ppoly1->set_values(10,20);
    ppoly2->set_values(10,20);
    ppoly3->set_values(10,20);

    cout<<"Area of rectangle "<<ppoly3->area()<<endl;
    cout<<"Area of traingle "<<ppoly2->area()<<endl;
    cout<<"Area of poly "<<ppoly1->area()<<endl;


    // return 0;
}