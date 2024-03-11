
#include <iostream>
#include "HotelRoom.h"

using namespace std;

int HotelRoom::totalRooms = 0;

HotelRoom::HotelRoom(const string& type, int number, double price)
        : roomType(type), roomNumber(number), pricePerNight(price) {
    ++totalRooms;
}

HotelRoom::HotelRoom() : roomType("Single"), roomNumber(0), pricePerNight(100.0) {
    ++totalRooms;
}

HotelRoom::HotelRoom(const HotelRoom& other)
        : roomType(other.roomType), roomNumber(other.roomNumber), pricePerNight(other.pricePerNight) {}

HotelRoom::HotelRoom(HotelRoom&& other) noexcept
        : roomType(move(other.roomType)), roomNumber(other.roomNumber), pricePerNight(other.pricePerNight) {}

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

int HotelRoom::getTotalRooms() {
    return totalRooms;
}

void HotelRoom::displayRoomInfo() const {
    cout << "Room Number: " << roomNumber << endl;
    cout << "Room Type: " << roomType << endl;
    cout << "Price Per Night: $" << pricePerNight << endl;
}

HotelRoom& HotelRoom::operator++() {
    ++roomNumber;
    return *this;
}

istream& operator>>(istream& in, HotelRoom& room) {
    cout << "Enter Room Type: ";
    in >> room.roomType;
    cout << "Enter Room Number: ";
    in >> room.roomNumber;
    cout << "Enter Price Per Night: ";
    in >> room.pricePerNight;
    return in;
}

ostream& operator<<(ostream& out, const HotelRoom& room) {
    out << "Room Number: " << room.roomNumber << endl;
    out << "Room Type: " << room.roomType << endl;
    out << "Price Per Night: $" << room.pricePerNight << endl;
    return out;
}
