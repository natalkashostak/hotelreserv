
#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <string>
using namespace std;

class Room {
protected:
    int roomNumber;
    double pricePerNight;

public:
    Room(int number, double price) : roomNumber(number), pricePerNight(price) {
        cout << "Room constructor called." << endl;
    }

    virtual ~Room() {
        cout << "Room destructor called." << endl;
    }

    virtual Room* clone() const = 0;
    virtual void displayInfo() const = 0;
    virtual void specialFeature() const = 0;
};

#endif // ROOM_H
