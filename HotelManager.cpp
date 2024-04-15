
#include "HotelManager.h"
using namespace std;

HotelManager::HotelManager() {
    cout << "HotelManager constructor called." << endl;
}

HotelManager::~HotelManager() {
    cout << "HotelManager destructor called." << endl;
}

void HotelManager::addBooking(const HotelBooking& booking) {
    bookings.push_back(booking);
    cout << "Booking added." << endl;
}

void HotelManager::displayAllBookings() const {
    cout << "Displaying all bookings:" << endl;
    for (const auto& booking : bookings) {
        booking.displayBookingInfo();
        cout << "----------------------------------" << endl;
    }
}
