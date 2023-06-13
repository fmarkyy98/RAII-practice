#ifndef DATABASE_SERVICE
#define DATABASE_SERVICE

#include <stdexcept>

class DatabaseService {
public:
    static DatabaseService* getInstance();

    void lock();
    void unlock();
    bool getIsLocked() const;

    template<typename T>
    T getData() const {
    if (!isLocked_)
        throw std::logic_error("You must lock the database, to get data.");

    return 42;
}

private:
    DatabaseService() = default;
    ~DatabaseService() = default;

    DatabaseService(const DatabaseService&) = delete;
    DatabaseService(DatabaseService&&) = delete;

private:
    static DatabaseService* self_;
    bool isLocked_ = false;
};

#endif // DATABASE_SERVICE