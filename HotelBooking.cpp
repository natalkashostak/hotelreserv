
#include "HotelBooking.h"
using namespace std;

HotelBooking::HotelBooking(const string& name, int guests) : guestName(name), numGuests(guests) {
    cout << "HotelBooking constructor called." << endl;
}

HotelBooking::HotelBooking(const HotelBooking& other) : guestName(other.guestName), numGuests(other.numGuests) {
    for (const auto& room : other.bookedRooms) {
        bookedRooms.push_back(room->clone()); // Use clone to copy rooms
    }
    cout << "HotelBooking copy constructor called." << endl;
}

HotelBooking::HotelBooking(HotelBooking&& other) noexcept
        : guestName(move(other.guestName)), numGuests(other.numGuests), bookedRooms(move(other.bookedRooms)) {
    other.bookedRooms.clear();
    cout << "HotelBooking move constructor called." << endl;
}

HotelBooking::~HotelBooking() {
    cout << "HotelBooking destructor called." << endl;
    for (auto& room : bookedRooms) {
        delete room;  // Properly delete Room pointers to prevent memory leaks
        room = nullptr;
    }
}

void HotelBooking::addRoom(Room* room) {
    bookedRooms.push_back(room);
}

void HotelBooking::displayBookingInfo() const {
    cout << "Guest Name: " << guestName << endl;
    cout << "Number of Guests: " << numGuests << endl;
    cout << "Booked Rooms:\n";
    for (const auto& room : bookedRooms) {
        room->displayInfo();
        cout << endl;
    }
    cout << endl;
}

