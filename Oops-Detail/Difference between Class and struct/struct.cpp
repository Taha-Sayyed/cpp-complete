// C++ Program to demonstrate that
// members of a structure are public
// by default
#include <iostream>

using namespace std;

struct Test {
    // x is public
    int x;
};

int main()
{
    Test t;
    t.x = 20;

    // works fine because x is public
    cout << t.x;
}