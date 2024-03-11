
#ifndef HOTELMANAGER_H
#define HOTELMANAGER_H

using namespace std;

#include <vector>
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

#endif // HOTELMANAGER_H
