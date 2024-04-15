
#ifndef HOTELBOOKING_H
#define HOTELBOOKING_H

#include <vector>
#include "Room.h"
using namespace std;

class HotelBooking {
private:
    string guestName;
    int numGuests;
    vector<Room*> bookedRooms;

public:
    HotelBooking(const string& name, int guests);
    HotelBooking(const HotelBooking& other);
    HotelBooking(HotelBooking&& other) noexcept;
    ~HotelBooking();

    void addRoom(Room* room);
    void displayBookingInfo() const;
};

#endif // HOTELBOOKING_H
