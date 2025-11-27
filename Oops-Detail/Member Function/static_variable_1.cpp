// // If you remove static, then:
// count becomes a normal local variable.
// It is created every time the function is called.
// It starts at 0 every time.
// It is destroyed at the end of each call.



#include<iostream>
using namespace std;


void counter(){
    static int count=0;
    cout<<count++;
}

int main(){

    for(int i=0;i<5;i++){
        counter();
    }

    return 0;
}
