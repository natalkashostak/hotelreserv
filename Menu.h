
#ifndef MENU_H
#define MENU_H

#include "UserManager.h"
#include "HotelManager.h"

using namespace std;

class Menu {
private:
    UserManager userManager;
    HotelManager hotelManager;
public:
    Menu();
    void mainMenu();
    void adminMenu();
    void userMenu();
};

#endif
