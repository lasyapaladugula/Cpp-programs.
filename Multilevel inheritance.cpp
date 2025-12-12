#include<iostream>
using namespace std;

class Vehicle {
    public:
        void move() {
            cout << "Vehicle is moving" << endl;
        }
};

class Car : public Vehicle {
    public:
        void start() {
            cout << "Car started" << endl;
        }
};

class SportsCar : public Car {
    public:
        void displaySportsCar() {
            cout << "Display from Sports Car" << endl;
        }
};

int main() {
	cout<<"=== multilevel inhertence ==="<<endl;
    SportsCar objs;
    objs.displaySportsCar();  
    objs.move();              
    objs.start();             
    return 0;
}
