
#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

class UserManager {
private:
    unordered_map<string, string> userPasswords;
    unordered_map<string, string> userRoles;

public:
    UserManager();
    void addUser(const string& username, const string& password, const string& role);
    bool authenticate(const string& username, const string& password);
    string getUserRole(const string& username);
};

#endif
