
#include <iostream>
#include "HotelBooking.h"

using namespace std;

HotelBooking::HotelBooking(const string& name, int guests)
        : guestName(name), numGuests(guests) {}

HotelBooking::HotelBooking() : guestName("Unknown"), numGuests(1) {}

HotelBooking::HotelBooking(const HotelBooking& other)
        : guestName(other.guestName), numGuests(other.numGuests), bookedRooms(other.bookedRooms) {}

HotelBooking::HotelBooking(HotelBooking&& other) noexcept
        : guestName(move(other.guestName)), numGuests(other.numGuests), bookedRooms(move(other.bookedRooms)) {}

HotelBooking::~HotelBooking() {}

string HotelBooking::getGuestName() const {
    return guestName;
}

int HotelBooking::getNumGuests() const {
    return numGuests;
}

void HotelBooking::addRoom(const HotelRoom& room) {
    bookedRooms.push_back(room);
}

void HotelBooking::displayBookingInfo() const {
    cout << "Guest Name: " << guestName << endl;
    cout << "Number of Guests: " << numGuests << endl;
    cout << "Booked Rooms:\n";
    for (const auto& room : bookedRooms) {
        room.displayRoomInfo();
        cout << endl;
    }
}
