#include <iostream>
using namespace std;

class A {
	public:
    void displayA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
	public:
    void displayB() {
        cout << "Class B (derived from A)" << endl;
    }
};

class C:public B {
	public:
    void displayC() {
        cout << "Class C (derived from B)" << endl;
    }
};

class D : public B {
	public:
    void displayD() {
        cout << "Class D (derived from B and C)" << endl;
    }
};

int main() {
	cout << "=== Hybrid Inheritance Example ===" << endl;
    D objD;
    objD.displayA();
    objD.displayB();
    objD.displayD();
    B objB;
    objB.displayA();
    objB.displayB();
    C objC;
    objC.displayA();
    objC.displayB();
    objC.displayC();
    return 0;
}
