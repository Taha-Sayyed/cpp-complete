// Write a C++ program that defines a Car class capable of storing a car’s name and a list of its available colors. The class should include a constructor for initializing these values and a destructor that prints a message when an object is destroyed. In the main() function, create an instance of the Car class (for example, a Honda with two initial colors) and then perform a deep copy of this object. After copying, modify the color list of the copied object by adding an additional color. Finally, display the colors of both the deep-copied object and the original object to demonstrate that modifying the copied object does not affect the original.

//No double deletion of the same memory

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
        ~Car(){
            cout<<"\nDestructor Called"<<endl;
        }
};

int main(){

    Car hondaCar("Honda Car",{"Red","Blue"});
    Car copiedObject=hondaCar;

    copiedObject.carColor={"Green","Red","Blue"};

    cout<<"\n-----------Original Object color--------------"<<endl;
    for(string i:hondaCar.carColor){
        cout<<i<<" ";
    }

    cout<<"\n----------- Copied Object Color---------------"<<endl;
    for (string j:copiedObject.carColor){
        cout<<j<<" ";
    }

    return 0;
}