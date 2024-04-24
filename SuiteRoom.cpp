
#include "SuiteRoom.h"

SuiteRoom::SuiteRoom(const string& type, int number, double price)
        : HotelRoom(type, number, price) {
    cout << "SuiteRoom constructor called." << endl;
}

SuiteRoom* SuiteRoom::clone() const {
    return new SuiteRoom(*this);
}

void SuiteRoom::displayInfo() const {
    HotelRoom::displayInfo();
    cout << " (Suite specifics can be added here)" << endl;
}

void SuiteRoom::specialFeature() const {
    cout << "Suite has a jacuzzi." << endl;
}
