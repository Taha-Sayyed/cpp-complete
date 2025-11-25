//pass by reference demostration 

#include <iostream>

using namespace std;

int globalChaiStock = 100;
void pourChai(int &cups){ // Here we passes the memory reference of the 'cups'. We did not allocated in dynamic memory
    int test = 9;
    cups = cups + 5;
    
    cout << "Poured cups: " << cups << endl;
}



int main(){
    
    int cups = 2;
    pourChai(cups);
    cout << "Total cups are " << cups << endl;
    return 0;
}
