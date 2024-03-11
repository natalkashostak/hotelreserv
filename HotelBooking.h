
#ifndef HOTELBOOKING_H
#define HOTELBOOKING_H

using namespace std;

#include <iostream>
#include <string>
#include <vector>
#include "HotelRoom.h"

class HotelBooking {
private:
    string guestName;
    int numGuests;
    vector<HotelRoom> bookedRooms;

public:
    HotelBooking(const string& name, int guests);
    HotelBooking();
    HotelBooking(const HotelBooking& other);
    HotelBooking(HotelBooking&& other) noexcept;
    ~HotelBooking();

    string getGuestName() const;
    int getNumGuests() const;
    void addRoom(const HotelRoom& room);
    void displayBookingInfo() const;
};

#endif // HOTELBOOKING_H
