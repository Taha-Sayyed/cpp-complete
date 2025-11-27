// Write a C++ program that demonstrates the use of classes, constructors, access modifiers, and friend functions. Create a class that represents a type of tea, storing its name and the number of servings available. Your class should have a constructor to initialize these values, a function to display the tea’s details, and a friend function that compares the servings of two tea objects and returns which one has more. In the main() function, create at least two objects of this class with different values, display their information, and use the friend function to determine which tea has a greater number of servings. Finally, print an appropriate message based on the comparison result.

#include<iostream>
using namespace std;


class Chai{
    private:
        string teaName;
        int serving;
    public:
        Chai(string name, int serve):teaName(name),serving(serve){};

        void displayDetail(){
            cout<<"Tea name is "<<teaName<<endl;
            cout<<"Number of serving are "<<serving<<endl;
        }

        friend bool comapreServing(const Chai &chai1,const Chai &chai2){
            return chai1.serving>chai2.serving;
        }
};


int main(){

    Chai tea_1("Ginger Tea",2);
    Chai tea_2("Masala Tea",6);

    tea_1.displayDetail();
    tea_2.displayDetail();


    if(comapreServing(tea_1,tea_2)){
        cout<<"Ginger tea serving is MORE"<<endl;
    }else{
        cout<<"Masala tea serving is MORE"<<endl;
    }

    return 0;
}