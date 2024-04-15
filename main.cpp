
#include <iostream>
#include "HotelRoom.h"
#include "SuiteRoom.h"
#include "HotelBooking.h"
#include "HotelManager.h"
using namespace std;

int main() {
    HotelRoom standardRoom("Standard", 101, 100.0);
    HotelRoom doubleRoom("Double", 102, 150.0);
    SuiteRoom suite("Presidential Suite", 201, 500.0);

    cout << "Room Details:" << endl;
    standardRoom.displayInfo();
    doubleRoom.displayInfo();
    suite.displayInfo();
    cout << endl;

    HotelBooking booking1("John Doe", 2);
    booking1.addRoom(&standardRoom);
    booking1.addRoom(&doubleRoom);

    HotelBooking booking2("Jane Smith", 1);
    booking2.addRoom(&suite);

    cout << "Booking Details:" << endl;
    booking1.displayBookingInfo();
    booking2.displayBookingInfo();
    cout << endl;

    HotelManager manager;
    manager.addBooking(booking1);
    manager.addBooking(booking2);

    cout << "All Bookings:" << endl;
    manager.displayAllBookings();

    return 0;
}
