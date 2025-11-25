#include<iostream>
#include<vector>
using namespace std;


class Chai{

    public:
        string teaName;
        int servings;
        vector<string>ingredients;

        Chai(string name,int serve,vector<string>ingr){
            cout<<"Param constructo called"<<endl;
            teaName=name;
            servings=serve;
            ingredients=ingr;
        }

        void displayChaiDetail(){
            cout<<"Tea name is "<<teaName<<endl;
            cout<<"Servings: "<<servings<<endl;
            for(string i:ingredients){
                cout<<i<<" ";
            }
        }
};


int main(){

    Chai chai("Ginger Tea",5,{"Ginger","Honey"});

    chai.displayChaiDetail();

    return 0;
}
