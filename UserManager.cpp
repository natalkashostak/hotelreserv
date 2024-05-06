
#include "UserManager.h"

UserManager::UserManager() {
    // Default admin account
    addUser("admin", "admin123", "admin");
}

void UserManager::addUser(const string& username, const string& password, const string& role) {
    userPasswords[username] = password; // In real application, should use hashed passwords
    userRoles[username] = role;
}

bool UserManager::authenticate(const string& username, const string& password) {
    auto it = userPasswords.find(username);
    if (it != userPasswords.end() && it->second == password) {
        return true;
    }
    return false;
}

string UserManager::getUserRole(const string& username) {
    return userRoles[username];
}
