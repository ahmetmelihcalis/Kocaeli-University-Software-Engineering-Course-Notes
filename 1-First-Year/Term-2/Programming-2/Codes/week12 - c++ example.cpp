#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SmartDevice {
private:
    string deviceName;
    string roomName;
    double powerConsumption;
    bool isOn;

public:
    SmartDevice(string name, string room, double power) {
        deviceName = name;
        roomName = room;
        powerConsumption = power;
        isOn = false;
    }

    string getDeviceName() {
        return deviceName;
    }

    string getRoomName() {
        return roomName;
    }

    double getPowerConsumption() {
        return powerConsumption;
    }

    bool getIsOn() {
        return isOn;
    }

    void setDeviceName(string name) {
        deviceName = name;
    }

    void setRoomName(string room) {
        roomName = room;
    }

    void setPowerConsumption(double power) {
        if (power > 0) {
            powerConsumption = power;
        }
    }

    void turnOn() {
        if (isOn == false) {
            isOn = true;
            cout << deviceName << " has been turned on." << endl;
        } else {
            cout << "The device is already on." << endl;
        }
    }

    void turnOff() {
        if (isOn == true) {
            isOn = false;
            cout << deviceName << " has been turned off." << endl;
        } else {
            cout << "The device is already off." << endl;
        }
    }

    double calculateDailyConsumption(int hours) {
        return powerConsumption * hours;
    }

    void displayInfo() {
        cout << "Device Name: " << deviceName << endl;
        cout << "Room Name: " << roomName << endl;
        cout << "Hourly Power Consumption: "
             << powerConsumption << " W" << endl;

        if (isOn == true) {
            cout << "Status: On" << endl;
        } else {
            cout << "Status: Off" << endl;
        }
    }
};

int main() {
    int deviceCount;

    cout << "Enter the number of devices: ";
    cin >> deviceCount;

    vector<SmartDevice> devices;

    for (int i = 0; i < deviceCount; i++) {
        string name;
        string room;
        double power;

        cout << endl;
        cout << "Device " << i + 1 << endl;

        cout << "Name: ";
        cin >> name;

        cout << "Room: ";
        cin >> room;

        cout << "Power Consumption: ";
        cin >> power;

        SmartDevice newDevice(name, room, power);
        devices.push_back(newDevice);
    }

    int choice = 0;

    while (choice != 5) {
        cout << endl;
        cout << "Menu" << endl;
        cout << "1. Display All Devices" << endl;
        cout << "2. Turn On a Device" << endl;
        cout << "3. Turn Off a Device" << endl;
        cout << "4. Calculate Daily Energy Consumption" << endl;
        cout << "5. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                for (int i = 0; i < devices.size(); i++) {
                    cout << endl;
                    cout << "Device " << i + 1 << endl;
                    devices[i].displayInfo();
                }

                break;
            }

            case 2: {
                string searchName;

                cout << "Enter device name: ";
                cin >> searchName;

                for (int i = 0; i < devices.size(); i++) {
                    if (devices[i].getDeviceName() == searchName) {
                        devices[i].turnOn();
                        break;
                    }
                }

                break;
            }

            case 3: {
                string searchName;

                cout << "Enter device name: ";
                cin >> searchName;

                for (int i = 0; i < devices.size(); i++) {
                    if (devices[i].getDeviceName() == searchName) {
                        devices[i].turnOff();
                        break;
                    }
                }

                break;
            }

            case 4: {
                string searchName;
                int hours;

                cout << "Enter device name: ";
                cin >> searchName;

                for (int i = 0; i < devices.size(); i++) {
                    if (devices[i].getDeviceName() == searchName) {
                        cout << "Enter operating hours: ";
                        cin >> hours;

                        cout << "Daily Energy Consumption: "
                             << devices[i].calculateDailyConsumption(hours)
                             << " Wh" << endl;

                        break;
                    }
                }

                break;
            }

            case 5: {
                cout << "Exiting the program." << endl;
                break;
            }

            default: {
                cout << "Invalid choice." << endl;
                break;
            }
        }
    }

    return 0;
}
