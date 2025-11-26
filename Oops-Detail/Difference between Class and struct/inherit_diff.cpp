#include<iostream>

using namespace std;


class Chai{
    public:
        string teaName;
        int serving;
    Chai(string name,int serve){
        teaName=name;
        serving=serve;
        cout<<"Base class constructor called"<<endl;
    }
    virtual void displayChaiDetail()=0;
    virtual ~Chai(){}

    
};


struct StructChai{
    string teaName;
    int serving;
    StructChai(string name,int serve){
        teaName=name;
        serving=serve;
        cout<<"Base class constructor called"<<endl;
    }
    virtual void displayChaiDetail()=0;
    virtual ~StructChai(){
        cout<<"StructChai destructor called"<<endl;
    }
};

class GreenTea:public Chai{
    public:
        GreenTea(int serve):Chai("Green Tea",serve){
            cout<<"Green tea constructor called"<<endl;
        }
        void displayChaiDetail() override{
            cout<<"Tea name is "<<teaName<<endl;
            cout<<"Serving: "<<serving<<endl;
        }
        ~GreenTea(){
            cout<<"Green Tea Destructor called"<<endl;
        }
};

//This class is inherited from the struct
class GingerTea:StructChai{
    public:
        GingerTea(int serve):StructChai("Ginger Tea",serve){
            cout<<"Class constructor called inherited from structure"<<endl;
        }
        void displayChaiDetail() override{
            cout<<"Tea name is "<<teaName<<endl;
            cout<<"Serving: "<<serving<<endl;
        }
        ~GingerTea(){
            cout<<"Ginger Tea Destructor called"<<endl;
        }
};


int main(){

    GreenTea tea_1(5);
    tea_1.displayChaiDetail();

    GingerTea tea_2(6);
    tea_2.displayChaiDetail();


    return 0;
}