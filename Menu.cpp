
#include "Menu.h"
#include <iostream>

Menu::Menu() {
    // Initialize with default users
    userManager.addUser("user", "user123", "user");
}

void Menu::mainMenu() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (userManager.authenticate(username, password)) {
        string role = userManager.getUserRole(username);
        if (role == "admin") {
            adminMenu();
        } else {
            userMenu();
        }
    } else {
        cout << "Authentication failed." << endl;
    }
}

void Menu::adminMenu() {
    int choice;
    cout << "Admin Menu:\n1. Add Booking\n2. View All Bookings\nEnter choice: ";
    cin >> choice;
    switch(choice) {
        case 1:
            // Implement add booking functionality
            break;
        case 2:
            hotelManager.displayAllBookings();
            break;
        default:
            cout << "Invalid choice." << endl;
    }
}

void Menu::userMenu() {
    cout << "User Menu:" << endl;
    hotelManager.displayAllBookings();
}
