
#ifndef HOTELROOM_H
#define HOTELROOM_H

#include <string>

#include "HotelBooking.h"
#include "HotelManager.h"

using namespace std;

class HotelRoom {
private:
    string roomType;
    int roomNumber;
    double pricePerNight;

public:
    HotelRoom(const string& type, int number, double price);
    HotelRoom();
    ~HotelRoom();

    string getRoomType() const;
    int getRoomNumber() const;
    double getPricePerNight() const;
    void displayRoomInfo() const;
};

#endif /* HOTELROOM_H */