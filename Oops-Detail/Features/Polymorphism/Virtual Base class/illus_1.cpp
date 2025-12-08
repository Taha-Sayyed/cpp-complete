#include <iostream>
using namespace std;

class A {
  public:
    A() {
        cout << "Constructor A called\n";
    }
    void display() {
      cout << "Hello form Class A \n";
    }
};

class B: public virtual A {
};

class C: public virtual A {
};

class D: public B, public C {
};

int main() {
  D object;
  object.display();
}
