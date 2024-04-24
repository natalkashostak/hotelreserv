
#ifndef HOTELROOM_H
#define HOTELROOM_H

#include "Room.h"
#include <iostream>
#include <string>
using namespace std;

class HotelRoom : public Room {
private:
    string roomType;
    static int totalRooms;

public:
    HotelRoom(const string& type, int number, double price);
    HotelRoom(const HotelRoom& other);
    HotelRoom(HotelRoom&& other) noexcept;
    virtual ~HotelRoom();

    HotelRoom& operator=(const HotelRoom& other);
    HotelRoom* clone() const override;
    void displayInfo() const override;
    void specialFeature() const override { cout << "No special features." << endl; }
    static int getTotalRooms();
};

#endif // HOTELROOM_H
