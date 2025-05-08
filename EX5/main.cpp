#include <iostream>
using namespace std;

class Car {
protected:
    string m_DriveMode;

public:
    Car() {
        cout << "Constructing Car" << endl;
    }

    void show_DriveMode(string brand) {
        cout << brand << " : Drive Mode = " << m_DriveMode << endl;
    }
};

class BMW_Car : public Car {
public:
    BMW_Car() {
        cout << "Constructing BMW_Car" << endl;
        m_DriveMode = "Rear-wheel";
    }
};

class AUDI_Car : public Car {
public:
    AUDI_Car() {
        cout << "Constructing AUDI_Car" << endl;
        m_DriveMode = "Front-wheel";
    }
};

class BENZ_Car : public Car {
public:
    BENZ_Car() {
        cout << "Constructing BENZ_Car" << endl;
        m_DriveMode = "Front-wheel";
    }
};

int main() {
    BMW_Car bmw;
    bmw.show_DriveMode("BMW");

    AUDI_Car audi;
    audi.show_DriveMode("Audi");

    BENZ_Car benz;
    benz.show_DriveMode("Benz");

    return 0;
}
