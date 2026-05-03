//Vehicle Information - multi level inheritance
#include <iostream>
using namespace std;
class Vehicle {
public:   string brand;
    Vehicle(string b) : brand(b) {}     
    void displayBrand() {
        cout << "Brand: " << brand << endl;
    }
};
class Car : public Vehicle {
public:    string model;    
    Car(string b, string m) : Vehicle(b), model(m) {}    
    void displayCar() {
        displayBrand();
        cout << "Model: " << model << endl; 
    }
};
class ElectricCar : public Car {
public:    int batteryCapacity;   
    ElectricCar(string b, string m, int capacity) : Car(b, m), batteryCapacity(capacity) {}    
    void displayElectricCar() {
        displayCar();   
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};
int main() {    
    ElectricCar myCar("Tesla", "Model S", 100);
    myCar.displayElectricCar();    
    return 0;
}
