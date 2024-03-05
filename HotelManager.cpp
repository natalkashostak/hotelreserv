
#include <iostream>

#include "HotelRoom.h"
#include "HotelBooking.h"
#include "HotelManager.h"

using namespace std;

HotelManager::HotelManager() {}

HotelManager::~HotelManager() {}

void HotelManager::addBooking(const HotelBooking& booking) {
    bookings.push_back(booking);
}

void HotelManager::displayAllBookings() const {
    for (const auto& booking : bookings) {
        booking.displayBookingInfo();
        cout << "----------------------------------\n";
    }
}