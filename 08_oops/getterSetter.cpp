#include<iostream>
#include<vector>

using namespace std;

class Chai{
    private:
        string teaName;
        int serving;
        vector<string>ingredients;

    public:
        Chai(){
            teaName="Unknown Chai";
            serving=5;
            ingredients={"Tea leaves","Water"};
        }
        
        Chai(string name,int serve,vector<string>ingr){
            teaName=name;
            serving=serve;
            ingredients=ingr;
        }

        //getter 
        string get_teaName(){
            return teaName;
        }

        //setter
        void set_teaName(string user_input_1){
            teaName=user_input_1;            
        }

        //get vector
        vector<string>get_ingredients(){
            return ingredients;
        }

        //set vectors
        void set_ingredients(vector<string>user_input_2){
            ingredients=user_input_2;
        }

};


int main(){

    Chai chai;
    cout<<chai.get_teaName();
    chai.set_teaName("Ginger Tea");
    cout<<"\n";
    cout<<chai.get_teaName()<<endl;

    vector<string>get=chai.get_ingredients();
    
    // for(string i:get){
        //     cout<<i<<" ";
        // }
        
    chai.set_ingredients({"Ginger","Honey"});
        
    vector<string>new_get=chai.get_ingredients();
    for(string i:new_get){
        cout<<i<<" ";
    }

    return 0;
}
