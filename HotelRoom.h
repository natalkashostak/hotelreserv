
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
    ~HotelRoom();

    HotelRoom& operator=(const HotelRoom& other);
    HotelRoom* clone() const override;
    void displayInfo() const override;
    static int getTotalRooms();
};

#endif // HOTELROOM_H
