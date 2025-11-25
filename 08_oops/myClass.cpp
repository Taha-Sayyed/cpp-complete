#include<iostream>
#include<vector>

using namespace std;

class Chai{
    public: //access modifier
        string teaName;
        int serving;
        vector<string> ingredients;

        void displayChaiDetail(){
            cout<<"Tea name is "<<teaName<<endl;
            cout<<"Number of servings: "<<serving<<endl;
            cout<<"Ingredients are "<<endl;
            for(string i:ingredients){
                cout<<i<<" ";
            }
        }
};


int main(){

    Chai chai;
    chai.teaName="Ginger Tea";
    chai.serving=2;
    chai.ingredients={"Honey","Tea leaves","Ginger"};

    chai.displayChaiDetail();


    return 0;
}
