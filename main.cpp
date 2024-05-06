

#include <iostream>
#include "HotelRoom.h"
#include "SuiteRoom.h"
#include "HotelBooking.h"
#include "HotelManager.h"
#include "Menu.h"
#include <cstdlib>
#include <cstring>

using namespace std;

int main() {
    const char* correctPassword = getenv("APP_PASSWORD");
    if (!correctPassword) {
        cerr << "Environment variable APP_PASSWORD is not set. Please set it to proceed." << endl;
        return 1;
    }

    char userInput[256];
    cout << "Enter the application password: ";
    cin.getline(userInput, 256);

    if (strcmp(userInput, correctPassword) != 0) {
        cout << "Access denied. Incorrect password." << endl;
        return 1;
    }

    // Create room instances
    HotelRoom standardRoom("Standard", 101, 100.0);
    HotelRoom doubleRoom("Double", 102, 150.0);
    SuiteRoom suite("Presidential Suite", 201, 500.0);

    // Display room details
    cout << "Room Details:" << endl;
    Room* rooms[] = {&standardRoom, &doubleRoom, &suite};
    for (auto& room : rooms) {
        room->displayInfo();
        room->specialFeature();
    }

    // Create booking instances
    HotelBooking booking1("John Doe", 2);
    booking1.addRoom(&standardRoom);
    booking1.addRoom(&doubleRoom);

    HotelBooking booking2("Jane Smith", 1);
    booking2.addRoom(&suite);

    // Display booking details
    cout << "Booking Details:" << endl;
    booking1.displayBookingInfo();
    booking2.displayBookingInfo();
    cout << endl;

    // Manage bookings
    HotelManager manager;
    manager.addBooking(booking1);
    manager.addBooking(booking2);

    // Display all bookings
    cout << "All Bookings:" << endl;
    manager.displayAllBookings();

    // Initialize and start the menu system
    Menu menu;
    menu.mainMenu();

    return 0;
}


