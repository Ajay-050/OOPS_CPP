#include<iostream>
using namespace std;
// #include "car.cpp"
// #include "vehicle.cpp"

class Vehicle{
    public:
    int numTyres;
    Vehicle(){

    }

    void print(){
        cout << "vehicle" << endl;
    }

    void v()
    {
        cout << "testing v" << endl;
    }
};




class Car : public Vehicle {
    public:
    int numGears;

    Car(){

    }

    void print(){
        cout << "car" << endl;
    }

    void c(){
        cout << "testing c" << endl;
    }
};

int main()
{
    Vehicle v3;
    
    Car c;

    c.print();

    // Vehicle *v1;

    // v1 = &c;
    Vehicle *v1 = new Car();

    v1->print();
}