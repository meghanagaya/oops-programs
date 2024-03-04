#include <iostream>
#include <string>

using namespace std;

// Base class: Vehicle
class Vehicle {
protected:
    string make;
    string model;
    int year;

public:
    Vehicle(string _make, string _model, int _year) : make(_make), model(_model), year(_year) {}

    void displayInfo() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

// Derived class: Car
class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(string _make, string _model, int _year, int _numDoors) : Vehicle(_make, _model, _year), numDoors(_numDoors) {}

    void displayCarInfo() {
        displayInfo(); // Calling base class method
        cout << "Number of doors: " << numDoors << endl;
    }
};

// Derived class: Bike
class Bike : public Vehicle {
private:
    bool hasBasket;

public:
    Bike(string _make, string _model, int _year, bool _hasBasket) : Vehicle(_make, _model, _year), hasBasket(_hasBasket) {}

    void displayBikeInfo() {
        displayInfo(); // Calling base class method
        cout << "Has basket: " << (hasBasket ? "Yes" : "No") << endl;
    }
};

// Derived class: Truck
class Truck : public Vehicle {
private:
    int cargoCapacity;

public:
    Truck(string _make, string _model, int _year, int _cargoCapacity) : Vehicle(_make, _model, _year), cargoCapacity(_cargoCapacity) {}

    void displayTruckInfo() {
        displayInfo(); // Calling base class method
        cout << "Cargo capacity: " << cargoCapacity << " tons" << endl;
    }
};

int main() {
    Car myCar("Toyota", "Camry", 2022, 4);
    Bike myBike("Honda", "CBR500R", 2023, true);
    Truck myTruck("Ford", "F-150", 2021, 3);

    cout << "Car Information:" << endl;
    myCar.displayCarInfo();

    cout << "\nBike Information:" << endl;
    myBike.displayBikeInfo();

    cout << "\nTruck Information:" << endl;
    myTruck.displayTruckInfo();

    return 0;
}
