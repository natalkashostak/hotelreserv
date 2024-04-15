
#include "HotelRoom.h"

int HotelRoom::totalRooms = 0;

HotelRoom::HotelRoom(const string& type, int number, double price)
        : Room(number, price), roomType(type) {
    ++totalRooms;
    cout << "HotelRoom constructor called." << endl;
}

HotelRoom::HotelRoom(const HotelRoom& other)
        : Room(other.roomNumber, other.pricePerNight), roomType(other.roomType) {
    ++totalRooms;
    cout << "HotelRoom copy constructor called." << endl;
}

HotelRoom::HotelRoom(HotelRoom&& other) noexcept
        : Room(other.roomNumber, other.pricePerNight), roomType(move(other.roomType)) {
    cout << "HotelRoom move constructor called." << endl;
}

HotelRoom::~HotelRoom() {
    --totalRooms;
    cout << "HotelRoom destructor called." << endl;
}

HotelRoom& HotelRoom::operator=(const HotelRoom& other) {
    if (this != &other) {
        Room::roomNumber = other.roomNumber;
        Room::pricePerNight = other.pricePerNight;
        roomType = other.roomType;
    }
    return *this;
}

HotelRoom* HotelRoom::clone() const {
    return new HotelRoom(*this);
}

void HotelRoom::displayInfo() const {
    cout << "Room Type: " << roomType << " | Number: " << roomNumber << " | Price: $" << pricePerNight << endl;
}

int HotelRoom::getTotalRooms() {
    return totalRooms;
}

