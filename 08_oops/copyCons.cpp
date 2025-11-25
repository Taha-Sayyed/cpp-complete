#include<iostream>
#include<vector>

using namespace std;

class Chai{
    public:
        string* teaName;
        int serving;
        vector<string>ingredients;

        Chai(string name,int serve,vector<string>ing){
            teaName=new string(name);
            serving=serve;
            ingredients=ing;
            cout<<"Parameter constructor called"<<endl;
        }
        
        Chai(const Chai& other){ //Passing the reference of the original object 
            teaName=new string(*other.teaName);
            // other.serving=100; Since 'const' is use, no change can be made in the original object
            serving=other.serving;
            ingredients=other.ingredients;
            cout<<"Copy constructor called"<<endl;
        }

        ~Chai(){
            cout<<"\nDeconstructor Called"<<endl;
            delete teaName;
        }

        void displayChaiDetail(){
            cout<<"Tea name is: "<<*teaName<<endl;
            cout<<"Number of serving: "<<serving<<endl;
            cout<<"ingredients are: ";
            for(string i:ingredients){
                cout<<i<<","<<" ";
            }
        }
};

int main(){

    Chai gingerTea("Ginger Tea",2,{"Tea leaves","water","Honey","Ginger"});

    Chai copiedObject=gingerTea;
    *gingerTea.teaName="Modified Ginger Tea";

    gingerTea.displayChaiDetail();

    cout<<"\n--------------Copied Object----------------"<<endl;
    cout<<"\n";

    copiedObject.displayChaiDetail();

    return 0;
}
