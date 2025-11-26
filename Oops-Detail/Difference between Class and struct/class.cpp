// C++ Program to demonstrate that
// Members of a class are private
// by default
#include <iostream>

using namespace std;

class Test {
    // x is private
    int x;
};

int main() {
    Test t;
  
    // compiler error because x
    // is private
    t.x = 20;

    return t.x;
}