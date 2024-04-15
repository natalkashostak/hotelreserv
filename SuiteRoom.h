
#ifndef SUITEROOM_H
#define SUITEROOM_H

#include "HotelRoom.h"
using namespace std;

class SuiteRoom : public HotelRoom {
public:
    SuiteRoom(const string& type, int number, double price);
    SuiteRoom* clone() const override;
    void displayInfo() const override;
};

#endif // SUITEROOM_H
