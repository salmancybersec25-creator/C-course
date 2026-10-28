#include <iostream>
#include <string>
using namespace std;

// Base class
class smartDevice {
private:
    string deviceName;
    bool isOn;

public:
    // Constructor
    smartDevice(string name, bool status) : deviceName(name), isOn(status) {}

    // Virtual function
    virtual void switchOn() {
        isOn = true;
        cout << "The device " << deviceName << " is switched on." << endl;
    }

    // Getter for deviceName (if needed in derived classes)
    string getDeviceName() const {
        return deviceName;
    }
};

// Derived class smartLight
class smartLight : public smartDevice {
private:
    int brightnessLevel;

public:
    smartLight(string name, bool status, int brightness) 
        : smartDevice(name, status), brightnessLevel(brightness) {}

    void switchOn() override {
        smartDevice::switchOn(); // Call base class function
        cout << "Brightness level: " << brightnessLevel << "%" << endl;
    }
};

// Derived class smartAC
class smartAC : public smartDevice {
private:
    int tempLevel;

public:
    smartAC(string name, bool status, int temp) 
        : smartDevice(name, status), tempLevel(temp) {}

    void switchOn() override {
        smartDevice::switchOn(); // Call base class functio
        cout << "Thermostat temperature level: " << tempLevel << "°C" << endl;
    }
};

int main() {
    smartDevice* devicePtr; // Base class pointer

    // Create smartLight object on heap
    devicePtr = new smartLight("Living Room Light", false, 75);
    devicePtr->switchOn();
    delete devicePtr;

    cout << endl;

    // Create smartAC object on heap
    devicePtr = new smartAC("Bedroom AC", false, 22);
    devicePtr->switchOn();
    delete devicePtr;

    return 0;
}