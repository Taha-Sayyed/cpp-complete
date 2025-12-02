//Implcit converion happen here
//getExternalDemo() function takes in an object of the class but when integer is passed then it works fine by implict conversion
//TO avoid this isseu, use explicit keyword with the constructor

#include<iostream>
using namespace std;


class Demo{
    private:
        int demo1;
    public:
        explicit Demo(int n){
            demo1=n;
        }
        void getDemo(){
            cout<<demo1<<endl;
        }
};

void getExternalDemo(Demo demo){
    demo.getDemo();
}

int main(){
    getExternalDemo(10);
    return 0;
}