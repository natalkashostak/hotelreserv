
#pragma once

using namespace std;

#ifndef HOTELMANAGER_H
#define HOTELMANAGER_H

#include <vector>

#include "HotelRoom.h"
#include "HotelBooking.h"

class HotelManager {
private:
    vector<HotelBooking> bookings;

public:
    HotelManager();
    ~HotelManager();

    void addBooking(const HotelBooking& booking);
    void displayAllBookings() const;
};

#endif /* HOTELMANAGER_H */