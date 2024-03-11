
#include <iostream>
#include <string>
#include <vector>
#include "HotelRoom.h"
#include "HotelBooking.h"
#include "HotelManager.h"

using namespace std;

int main() {
    HotelRoom room1("Double", 101, 150.0);
    HotelRoom room2("Single", 102, 100.0);

    HotelBooking booking1("Natalia Shostak", 2);
    booking1.addRoom(room1);
    booking1.addRoom(room2);

    HotelManager manager;
    manager.addBooking(booking1);

    manager.displayAllBookings();

    return 0;
}
