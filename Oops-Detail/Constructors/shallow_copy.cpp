// Write a C++ program that defines a Car class containing a car’s name and a list of its available colors. The class should include a constructor that initializes these values. In the main function, create an instance of the Car class representing a Honda, giving it two initial colors: red and blue. Then create a shallow copy of that object by assigning its address to a pointer. After that, add an additional color—green—through the shallow copy, and demonstrate that because this is a shallow copy, both the original object and the copied pointer reflect the new color. Finally, print the colors from both the shallow copy and the original object to show that they share the same underlying data.

#include<iostream>
#include<vector>
using namespace std;


class Car{
    public:
        string carName;
        vector<string>carColor;

        Car(string name,vector<string>color){
            carName=name;
            carColor=color;
        }
};


int main(){

    Car hondaCar("Honda city",{"Red","Blue"});

    Car* shallowCopy=&hondaCar;
    shallowCopy->carColor={"Green","Red","Blue"};

    cout<<"-------------Original object----------------"<<endl;
    cout<<"\nColor of the original object "<<endl;
    for(string i:hondaCar.carColor){
        cout<<i<<" ";
    }

    return 0;
}