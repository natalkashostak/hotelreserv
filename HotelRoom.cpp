
#include <iostream>

#include "HotelRoom.h"
#include "HotelBooking.h"
#include "HotelManager.h"

using namespace std;

HotelRoom::HotelRoom(const string& type, int number, double price)
        : roomType(type), roomNumber(number), pricePerNight(price) {}

HotelRoom::HotelRoom() : roomType("Single"), roomNumber(0), pricePerNight(100.0) {}

HotelRoom::~HotelRoom() {}

string HotelRoom::getRoomType() const {
    return roomType;
}

int HotelRoom::getRoomNumber() const {
    return roomNumber;
}

double HotelRoom::getPricePerNight() const {
    return pricePerNight;
}

void HotelRoom::displayRoomInfo() const {
    cout << "Room Number: " << roomNumber << endl;
    cout << "Room Type: " << roomType << endl;
    cout << "Price Per Night: $" << pricePerNight << endl;
}