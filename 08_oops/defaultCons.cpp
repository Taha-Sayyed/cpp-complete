#include<iostream>
#include<vector>
using namespace std;


class Chai{

    public:
        string teaName;
        int servings;
        vector<string>ingredients;

        Chai(){
            cout<<"Default Construtcor called"<<endl;
            teaName="Unknown Tea";
            servings=1;
            ingredients={"Water","Tea leaves"};
        }

        void displayChaiDetail(){
            cout<<"Tea name is "<<teaName<<endl;
            cout<<"Servings: "<<servings<<endl;
            for(string i:ingredients){
                cout<<i<<endl;
            }
        }
};


int main(){

    Chai chai;

    chai.displayChaiDetail();

    return 0;
}
