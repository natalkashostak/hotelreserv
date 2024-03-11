
#ifndef HOTELROOM_H
#define HOTELROOM_H

using namespace std;

#include <iostream>
#include <string>

class HotelRoom {
private:
    string roomType;
    int roomNumber;
    double pricePerNight;
    static int totalRooms;

public:
    HotelRoom(const string& type, int number, double price);
    HotelRoom();
    HotelRoom(const HotelRoom& other);
    HotelRoom(HotelRoom&& other) noexcept;
    ~HotelRoom();

    string getRoomType() const;
    int getRoomNumber() const;
    double getPricePerNight() const;
    static int getTotalRooms();

    void displayRoomInfo() const;
    HotelRoom& operator++();
    friend istream& operator>>(istream& in, HotelRoom& room);
    friend ostream& operator<<(ostream& out, const HotelRoom& room);
};

#endif // HOTELROOM_H
