#include <iostream>

#include "DatabaseService.h"

DatabaseService* DatabaseService::self_ = nullptr;

DatabaseService* DatabaseService::getInstance() {
    if (DatabaseService::self_)
        throw std::logic_error("You already have an instance dummy.");
    else 
        return DatabaseService::self_ = new DatabaseService();
}

void DatabaseService::lock() {
    if (isLocked_)
        throw std::logic_error("Double lock not allowed.");

    isLocked_ = true;
    std::cout << "Database locked\n";
}

void DatabaseService::unlock() {
    if (!isLocked_)
        throw std::logic_error("Double unlock not allowed.");

    isLocked_ = false;
    std::cout << "Database UN_locked Nice!\n";
}

bool DatabaseService::getIsLocked() const {
    return isLocked_;
}
