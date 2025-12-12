#include<iostream>
#include<cstring> 
using namespace std;

class student {
    int rno;
    char sname[20]; 

public:
    void read(int a, const char* name) {
        rno = a;
        strcpy(sname, name); 
    }

    void print() {
        cout << "rno = " << rno << endl;
        cout << "name = " << sname << endl;
    }
};

int main() {
    student s;
    s.read(77, "Lasya");
    s.print();
    return 0;
}

