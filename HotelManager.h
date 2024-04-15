
#ifndef HOTELMANAGER_H
#define HOTELMANAGER_H

#include <vector>
#include "HotelBooking.h"
using namespace std;

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
