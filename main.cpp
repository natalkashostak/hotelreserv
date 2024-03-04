
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class HotelRoom {
private:
    string roomType;
    int roomNumber;
    double pricePerNight;

public:
    HotelRoom(const string& type, int number, double price)
            : roomType(type), roomNumber(number), pricePerNight(price) {}

    HotelRoom() : roomType("Single"), roomNumber(0), pricePerNight(100.0) {}

    ~HotelRoom() {}

    string getRoomType() const {
        return roomType;
    }

    int getRoomNumber() const {
        return roomNumber;
    }

    double getPricePerNight() const {
        return pricePerNight;
    }

    void displayRoomInfo() const {
        cout << "Room Number: " << roomNumber << endl;
        cout << "Room Type: " << roomType << endl;
        cout << "Price Per Night: $" << pricePerNight << endl;
    }
};

class HotelBooking {
private:
    string guestName;
    int numGuests;
    vector<HotelRoom> bookedRooms;

public:
    HotelBooking(const string& name, int guests)
            : guestName(name), numGuests(guests) {}

    HotelBooking() : guestName("Unknown"), numGuests(1) {}

    ~HotelBooking() {}

    string getGuestName() const {
        return guestName;
    }

    int getNumGuests() const {
        return numGuests;
    }

    void addRoom(const HotelRoom& room) {
        bookedRooms.push_back(room);
    }

    void displayBookingInfo() const {
        cout << "Guest Name: " << guestName << endl;
        cout << "Number of Guests: " << numGuests << endl;
        cout << "Booked Rooms:\n";
        for (const auto& room : bookedRooms) {
            room.displayRoomInfo();
            cout << endl;
        }
    }
};

class HotelManager {
private:
    vector<HotelBooking> bookings;

public:
    HotelManager() {}

    ~HotelManager() {}

    void addBooking(const HotelBooking& booking) {
        bookings.push_back(booking);
    }

    void displayAllBookings() const {
        for (const auto& booking : bookings) {
            booking.displayBookingInfo();
            cout << "----------------------------------\n";
        }
    }
};

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
