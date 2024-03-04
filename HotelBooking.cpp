
#include <iostream>

#include "HotelRoom.h"
#include "HotelBooking.h"
#include "HotelManager.h"

using namespace std;

HotelBooking::HotelBooking(conststring& name, int guests)
        : guestName(name), numGuests(guests) {}

HotelBooking::HotelBooking() : guestName("Unknown"), numGuests(1) {}

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