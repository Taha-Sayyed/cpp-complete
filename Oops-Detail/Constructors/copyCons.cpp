
#include<iostream>
#include<vector>
using namespace std;


class Car{
    public:
        string* carName;
        vector<string>carColor;

        Car(string name,vector<string>color){
            carName=new string(name);
            carColor=color;
        }
        Car(const Car& other){
            carName=new string(*other.carName);
            carColor=other.carColor;
            cout<<"Copy COnstructor"<<endl;
        }
        ~Car(){
            cout<<"\nDestructor Called"<<endl;
            delete carName;
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
    cout<<"Car name is "<<*hondaCar.carName<<endl;

    cout<<"\n----------- Copied Object Color---------------"<<endl;
    for (string j:copiedObject.carColor){
        cout<<j<<" ";
    }

    return 0;
}