#include <iostream>
using namespace std;

class WiFi {
public:
    void connect() {
        cout << "Connected using WiFi" << endl;
    }
};

class Bluetooth {
public:
    void connect() {
        cout << "Connected using Bluetooth" << endl;
    }
};

class SmartHub : public WiFi, public Bluetooth {
public:
    void controlDevice() {
        cout << "Smart device controlled" << endl;
    }
};

int main() {
    SmartHub hub;

    hub.WiFi::connect();

    hub.controlDevice();

    return 0;
}